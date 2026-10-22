/*
 * FUN_004e28e0 (80 B) — MLR/Adept: clear a flag bit and walk a linked
 * list dispatching FUN_004ea9f0. __thiscall (ECX = this), RET 0x4
 * (1 stack arg).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004ea9f0(void);

__declspec(naked) void FUN_004e28e0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        push    edi
        mov     edi, dword ptr [esi + 0x10]
        mov     eax, edi
        shr     eax, 0x5
        test    al, 0x1
        jz      loc_4e290c
        mov     al, byte ptr [esp + 0xc]
        test    al, al
        jz      loc_4e2906
        mov     ecx, dword ptr [esi + 0xd8]
        call    dword ptr [ecx + 0x1c]
        mov     byte ptr [esp + 0xc], 0x0
loc_4e2906:
        and     edi, 0xffffffdf
        mov     dword ptr [esi + 0x10], edi
loc_4e290c:
        mov     esi, dword ptr [esi + 0x184]
        mov     edi, dword ptr [esp + 0xc]
        test    esi, esi
        jz      loc_4e292b
loc_4e2916:
        mov     ecx, dword ptr [esi]
        test    ecx, ecx
        mov     esi, dword ptr [esi + 0x4]
        jz      loc_4e292b
        push    edi
        call    FUN_004ea9f0
        /* __emit: backward jmp rel8 miscomputed off-by-4 (call-reloc between branch and target); ref EB EB */
        __emit 0xEB
        __emit 0xEB
loc_4e292b:
        pop     edi
        pop     esi
        ret     0x4
    }
}
