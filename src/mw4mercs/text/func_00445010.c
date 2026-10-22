/*
 * FUN_00445010 (141 B) - MLR mesh/render static teardown helper.
 * Frees the four global buffers/objects (DAT_007b9888/884/880/88c) via
 * FUN_004084e0, calling FUN_00415200 (destructor) on the last one first.
 * Clears DAT_007b988c to 0.
 *
 * CFLAGS: /O1
 */

extern int DAT_007b9888;
extern int DAT_007b9884;
extern int DAT_007b9880;
extern int DAT_007b988c;

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00415200(void);

__declspec(naked) void FUN_00445010(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [DAT_007b9888]
        test    esi, esi
        jz      L45033
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      L4502a
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L4502a:
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L45033:
        mov     esi, dword ptr [DAT_007b9884]
        test    esi, esi
        jz      L45055
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      L4504c
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L4504c:
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L45055:
        mov     esi, dword ptr [DAT_007b9880]
        test    esi, esi
        jz      L45077
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      L4506e
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L4506e:
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L45077:
        mov     esi, dword ptr [DAT_007b988c]
        test    esi, esi
        jz      L45091
        mov     ecx, esi
        call    FUN_00415200
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L45091:
        mov     dword ptr [DAT_007b988c], 0x0
        pop     esi
        ret
    }
}
