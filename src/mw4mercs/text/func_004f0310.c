/*
 * FUN_004f0310 (47 B) — Adept::CameraComponent create (__cdecl, 3
 * params). Allocates a 0x30-byte object via FUN_004084d0 and constructs
 * it through FUN_004f0000(g_007dc824, param_1, param_2, param_3);
 * returns 0 on allocation failure.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004f0000(void);

extern int g_007dc824;   /* DAT_007dc824 */

__declspec(naked) void FUN_004f0310(void)
{
    __asm {
        push    0x30
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L33c
        mov     ecx, dword ptr [esp + 0xc]
        mov     edx, dword ptr [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [esp + 0x8]
        push    edx
        mov     edx, dword ptr [g_007dc824]
        push    ecx
        push    edx
        mov     ecx, eax
        call    FUN_004f0000
        ret
L33c:
        xor     eax, eax
        ret
    }
}
