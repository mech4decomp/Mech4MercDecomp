/*
 * FUN_005c9900 (67 B) - __thiscall (this in ECX), RET 4. Returns bool in AL
 * based on a flag at [ecx+0x364] and an FPU comparison after FUN_00707e70.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_00707e70(void);

__declspec(naked) void __cdecl FUN_005c9900(void)
{
    
__asm {
mov     eax, [ecx + 0x364]
        test    eax, eax
        jz      l_9916
        mov     dl, byte ptr [eax + 0x1a]
        test    dl, dl
        jnz     l_9916
        mov     al, 0x1
        ret     0x4
    l_9916:
        fld     dword ptr [esp + 0x4]
        push    0x0
        fadd    dword ptr [ecx + 0x4dc]
        fstp    dword ptr [esp + 0x8]
        call    FUN_00707e70
        fcomp   dword ptr [esp + 0x4]
        _emit   0xDF            /* __emit: fnstsw ax -> MSVC6 inserts 9B WAIT prefix */
        _emit   0xE0
        test    ah, 0x1
        jz      l_993e
        mov     eax, 0x1
        ret     0x4
    l_993e:
        xor     eax, eax
        ret     0x4
    }


}
