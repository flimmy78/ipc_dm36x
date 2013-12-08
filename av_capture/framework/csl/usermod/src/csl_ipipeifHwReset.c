#include <csl_ipipeif.h>

CSL_Status CSL_ipipeifHwReset(CSL_IpipeifHandle hndl)
{
    if (hndl == NULL)
        return CSL_EFAIL;

    hndl->regs->ENABLE = CSL_IPIPEIF_ENABLE_RESETVAL;
    hndl->regs->CFG1 = CSL_IPIPEIF_CFG1_RESETVAL;
    hndl->regs->PPLN = CSL_IPIPEIF_PPLN_RESETVAL;
    hndl->regs->LPFR = CSL_IPIPEIF_LPFR_RESETVAL;
    hndl->regs->HNUM = CSL_IPIPEIF_HNUM_RESETVAL;
    hndl->regs->VNUM = CSL_IPIPEIF_VNUM_RESETVAL;
    hndl->regs->ADDRU = CSL_IPIPEIF_ADDRU_RESETVAL;
    hndl->regs->ADDRL = CSL_IPIPEIF_ADDRL_RESETVAL;
    hndl->regs->ADOFS = CSL_IPIPEIF_ADOFS_RESETVAL;
    hndl->regs->RSZ = CSL_IPIPEIF_RSZ_RESETVAL;
    hndl->regs->GAIN = CSL_IPIPEIF_GAIN_RESETVAL;
    hndl->regs->DPCM = CSL_IPIPEIF_DPCM_RESETVAL;
    hndl->regs->CFG2 = CSL_IPIPEIF_CFG2_RESETVAL;
    hndl->regs->INIRSZ = CSL_IPIPEIF_INIRSZ_RESETVAL;
    hndl->regs->OCLIP = CSL_IPIPEIF_OCLIP_RESETVAL;
    hndl->regs->UFERR = CSL_IPIPEIF_UFERR_RESETVAL;
    hndl->regs->CLKDIV = CSL_IPIPEIF_CLKDIV_RESETVAL;
    hndl->regs->DPC1 = CSL_IPIPEIF_DPC1_RESETVAL;
    hndl->regs->DPC2 = CSL_IPIPEIF_DPC2_RESETVAL;
    hndl->regs->DFSGVL = CSL_IPIPEIF_DFSGVL_RESETVAL;
    hndl->regs->DFSGTH = CSL_IPIPEIF_DFSGTH_RESETVAL;
    hndl->regs->RSZ2 = CSL_IPIPEIF_RSZ2_RESETVAL;
    hndl->regs->INIRSZ2 = CSL_IPIPEIF_INIRSZ2_RESETVAL;

    return CSL_SOK;
}
