/*
 * FUN_100019e0 (135 B) - __stdcall, RET 0x4. Allocates via FUN_1002f650 /
 * FUN_1002ef30, stores into param_1+0x2c/0x30, frees on failure.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_1002f650(void);   /* rel32 call */
extern void __cdecl FUN_1002ef30(void);   /* rel32 call */
extern void __cdecl FUN_10001d60(void);   /* rel32 call */

__declspec(naked) void __stdcall FUN_100019e0(void)
{
    __asm {
        sub     esp, 8
        push    esi
        lea     eax, [esp + 4]
        push    eax
        mov     dword ptr [esp + 8], 0
        mov     dword ptr [esp + 0xc], 0
        call    FUN_1002f650
        mov     esi, eax
        test    esi, esi
        jl      L_34
        mov     ecx, dword ptr [esp + 4]
        push    ecx
        lea     edx, [esp + 0xc]
        push    edx
        call    FUN_1002ef30
        mov     esi, eax
        test    esi, esi
        jl      L_34
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 4]
        mov     edx, dword ptr [esp + 8]
        mov     dword ptr [eax + 0x2c], ecx
        mov     dword ptr [eax + 0x30], edx
        mov     eax, esi
        pop     esi
        add     esp, 8
        ret     4
L_34:
        mov     eax, dword ptr [esp + 4]
        test    eax, eax
        jz      L_4d
        push    eax
        call    FUN_10001d60
        add     esp, 4
        mov     dword ptr [esp + 4], 0
L_4d:
        mov     eax, dword ptr [esp + 8]
        test    eax, eax
        jz      L_5e
        push    eax
        call    FUN_10001d60
        add     esp, 4
L_5e:
        mov     eax, esi
        pop     esi
        add     esp, 8
        ret     4
    }
}
