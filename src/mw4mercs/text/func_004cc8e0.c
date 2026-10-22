/*
 * FUN_004cc8e0 (72 B) — __thiscall sub-object constructor. Sets a flag
 * byte, calls FUN_00707e70 (returns a double on the FPU stack), stores
 * it at +0xc04, and zeroes a 0xff-entry table at +0x404.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern double __cdecl FUN_00707e70(int);

__declspec(naked) void FUN_004cc8e0(void)
{
    __asm {
        push    esi
        push    edi
        mov     esi, ecx
        xor     edi, edi
        mov     dword ptr [esi+0x4], edi
        push    edi
        mov     byte ptr [esi], 0x1
        call    FUN_00707e70
        fstp    qword ptr [esi+0xc04]
        lea     eax, [esi+0x404]
        mov     ecx, 0xff
    L903:
        mov     dword ptr [eax+0xfffffc04], edi
        mov     dword ptr [eax], edi
        mov     dword ptr [eax+0x3fc], edi
        add     eax, 0x4
        dec     ecx
        jnz     L903
        mov     dword ptr [esi+0xbfc], edi
        mov     dword ptr [esi+0xc00], edi
        pop     edi
        mov     eax, esi
        pop     esi
        ret
    }
}
