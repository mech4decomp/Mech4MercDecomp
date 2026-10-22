/*
 * FUN_004C3020 (78 B) — MLR camera-element shutdown / option save (cdecl).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_0040eda0(void);
extern void FUN_00411f20(void *this);
extern void FUN_00415200(void *this);
extern void FUN_004084e0(void);

extern char g_7daaf8;
extern int g_7daaf4;

__declspec(naked) void FUN_004c3020(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 0x4]
        test    ecx, ecx
        jz      l_skip_save

        push    0x76d9ec
        call    FUN_0040eda0
        xor     ecx, ecx
        mov     cl, byte ptr [g_7daaf8]
        push    ecx
        push    0x77161c
        mov     ecx, eax
        call    FUN_00411f20

    l_skip_save:
        push    esi
        mov     esi, dword ptr [g_7daaf4]
        test    esi, esi
        jz      l_skip_free

        mov     ecx, esi
        call    FUN_00415200
        push    esi
        call    FUN_004084e0
        add     esp, 0x4

    l_skip_free:
        mov     dword ptr [g_7daaf4], 0x0
        pop     esi
        ret
    }
}
