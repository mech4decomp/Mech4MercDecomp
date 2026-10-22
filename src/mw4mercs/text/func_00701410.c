/*
 * FUN_00701410 (87 B) — Startup helper. Allocates an object, calls an
 * init routine, then runs a startup check; on failure logs an error
 * (and __debugbreak if the log call fails) and returns -1, else 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00740860(int a, int b);
extern void *__cdecl FUN_004084d0(int size);
extern void *__cdecl FUN_00701000(void);
extern int __cdecl FUN_00701030(void *obj);
extern void *__cdecl FUN_0073e160(int code);
extern int __cdecl FUN_006fabf0(const char *fmt, ...);

extern void *g_856870;   /* DAT_00856870 */

__declspec(naked) int FUN_00701410(void)
{
    __asm {
        push    0x0
        push    0x0
        call    FUN_00740860
        push    0x14
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_701430
        mov     ecx, eax
        call    FUN_00701000
        jmp     L_701432
L_701430:
        xor     eax, eax
L_701432:
        push    esi
        push    eax
        mov     dword ptr [g_856870], eax
        call    FUN_00701030
        mov     esi, eax
        test    esi, esi
        jge     L_701463
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7A1198
        call    FUN_006fabf0
        add     esp, 0xC
        test    eax, eax
        jz      L_70145e
        int     3
L_70145e:
        or      eax, 0xFFFFFFFF
        pop     esi
        ret
L_701463:
        xor     eax, eax
        pop     esi
        ret
    }
}
