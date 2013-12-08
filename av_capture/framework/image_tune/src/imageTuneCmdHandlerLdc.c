#include <imageTunePriv.h>

int IMAGE_TUNE_CmdExecuteLdcPrm(IMAGE_TUNE_CmdInfo *cmdInfo, IMAGE_TUNE_CmdInfo *statusInfo)
{
    CSL_LdcHwSetup *pPrm = &gIMAGE_TUNE_ctrl.curPrm.ldcPrm.ldcSetup;
    Uint32 *pTable = gIMAGE_TUNE_ctrl.curPrm.ldcPrm.ldcTable;
    Uint32 prmSize = sizeof(*pPrm);
    Uint32 tableSize = sizeof(gIMAGE_TUNE_ctrl.curPrm.ldcPrm.ldcTable);
    Uint32 reqdPrmSize =  prmSize + tableSize;

    if (cmdInfo->prmSize != reqdPrmSize )
    {
#ifdef IMAGE_TUNE_CMD_HANDLER_DEBUG
        OSA_printf(" IMAGE TUNE SERVER: Received parameter size (%d != %d) mismatch ERROR for CMD 0x%04x\n", cmdInfo->prmSize, reqdPrmSize, cmdInfo->commandId);
#endif
        return OSA_EFAIL;
    }

    memcpy( pPrm, cmdInfo->prm, prmSize);
    memcpy( pTable, (Uint8*)cmdInfo->prm + prmSize , tableSize);

    pPrm->table = pTable;
    pPrm->frameConfig = NULL;

    return OSA_SOK;
}


