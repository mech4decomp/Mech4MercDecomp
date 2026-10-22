/*
 * FUN_004C1400 (100 B) — MLR subsystem static destructor / teardown.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int DAT_007b37f8;
extern int DAT_007daaf0;
extern int DAT_007daaec;

extern void *FUN_0040eda0(void);
extern void FUN_00411d10(void *this);
extern void FUN_00415200(void *this);
extern void FUN_004084e0(void *this);
extern void FUN_006f4850(void);

__declspec(naked) void FUN_004c1400(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 0x4]
        test    ecx, ecx
        jz      l_skip_log

        push    0x76d9ec
        call    FUN_0040eda0
        mov     ecx, dword ptr [DAT_007b37f8]
        push    ecx
        push    0x7714d4
        mov     ecx, eax
        call    FUN_00411d10

    l_skip_log:
        push    esi
        mov     esi, dword ptr [DAT_007daaf0]
        test    esi, esi
        jz      l_skip_free

        mov     ecx, esi
        call    FUN_00415200
        push    esi
        call    FUN_004084e0
        add     esp, 0x4

    l_skip_free:
        mov     edx, dword ptr [DAT_007daaec]
        push    0x1
        push    edx
        mov     dword ptr [DAT_007daaf0], 0x0
        call    FUN_006f4850
        mov     dword ptr [DAT_007daaec], 0x0

        pop     esi
        ret
    }
}
