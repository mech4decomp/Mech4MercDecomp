/*
 * FUN_004d8d70 (59 B) — allocates a RendererManager object (0x20 bytes via
 * FUN_004084d0); on success constructs it via __thiscall FUN_004d5c10 and
 * stores the result in global 0x007dc570, else stores 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_004084d0(int);
extern int __cdecl FUN_004d5c10(void);   /* __thiscall; ecx set manually in asm */
extern int g_007dc140;
extern int g_007dc570;

__declspec(naked) void FUN_004d8d70(void)
{
    __asm {
        push    0x20
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      zero_path
        mov     ecx, dword ptr [g_007dc140]
        push    0x0
        push    0x0
        push    ecx
        push    0x7730b4                    /* "Adept::RendererManager" */
        push    0x1e3
        mov     ecx, eax
        call    FUN_004d5c10
        mov     dword ptr [g_007dc570], eax
        ret
zero_path:
        mov     dword ptr [g_007dc570], 0x0
        ret
    }
}
