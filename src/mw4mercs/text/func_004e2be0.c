/*
 * FUN_004e2be0 (82 B) — MLR/Adept: (re)allocate a dword array. __thiscall
 * (ECX = this), RET 0x4 (1 stack arg). Frees the old buffer and allocates
 * a new one sized param_1*4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004084d0(void);

__declspec(naked) void FUN_004e2be0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x4]
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        cmp     edi, eax
        jz      loc_4e2c2d
        test    edi, edi
        jbe     loc_4e2c1c
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      loc_4e2c02
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
loc_4e2c02:
        /* __emit: no-base SIB lea [edi*4+0] (8D 04 BD 00 00 00 00) not encodable natively */
        __emit 0x8D
        __emit 0x04
        __emit 0xBD
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
        push    eax
        mov     dword ptr [esi + 0x4], edi
        call    FUN_004084d0
        add     esp, 0x4
        pop     edi
        mov     dword ptr [esi], eax
        pop     esi
        ret     0x4
loc_4e2c1c:
        mov     ecx, dword ptr [esi]
        push    ecx
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [esi], 0x0
loc_4e2c2d:
        pop     edi
        pop     esi
        ret     0x4
    }
}
