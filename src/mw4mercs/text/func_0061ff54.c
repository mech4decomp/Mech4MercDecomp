/*
 * FUN_0061ff54 (extent 0x61ff54-0x620120) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)


__declspec(naked) void FUN_0061ff54(void)
{
    __asm {
L_ff54:
        jae    L_ff54
        popad    
        add    byte ptr [edi + edi*8 + 0x61], cl
        add    byte ptr [eax - 2], bh
        popad    
        add    byte ptr [eax], al
        add    al, byte ptr [edx]
        add    al, byte ptr [edx]
        add    al, byte ptr [edx]
        add    al, byte ptr [edx]
        add    al, byte ptr [edx]
        add    al, byte ptr [edx]
        add    al, byte ptr [edx]
        add    al, byte ptr [edx]
        add    al, byte ptr [edx]
        add    al, byte ptr [edx]
        add    al, byte ptr [eax]
        add    byte ptr [eax], al
        add    byte ptr [eax], al
        add    byte ptr [edx], al
        add    al, byte ptr [eax]
        add    byte ptr [edx], al
        add    al, byte ptr [edx]
        add    al, byte ptr [edx]
        add    al, byte ptr [edx]
        add    byte ptr [edx], al
        add    al, byte ptr [edx]
        add    al, byte ptr [edx]
        add    al, byte ptr [edx]
        add    al, byte ptr [edx]
        add    al, byte ptr [edx]
        add    al, byte ptr [edx]
        add    al, byte ptr [edx]
        add    al, byte ptr [edx]
        add    al, byte ptr [ecx]
        nop    
    }
}
