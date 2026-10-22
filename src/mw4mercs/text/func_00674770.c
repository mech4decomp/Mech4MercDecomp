/*
 * FUN_00674770 (97 B) — __cdecl, one stack param.
 *
 * Calls a vtable method (slot 0x14) on the object, FUN_00501EB0, a
 * vtable method (slot 4), then FUN_0040ED60("GameData"). Looks up a
 * "SlotType" via FUN_00411BF0 and, if found, resolves it via
 * FUN_005B7620 and stores the result at obj+0x2C.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00501eb0(void);
extern void __cdecl FUN_0040ed60(void);
extern void __cdecl FUN_00411bf0(void);
extern void __cdecl FUN_005b7620(void);

__declspec(naked) void __cdecl FUN_00674770(void *param)
{
    __asm {
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        mov     esi, dword ptr [edi]
        mov     eax, dword ptr [esi]
        push    0x34
        mov     ecx, esi
        call    dword ptr [eax + 0x14]
        push    edi
        call    FUN_00501eb0
        mov     edx, dword ptr [esi]
        add     esp, 4
        mov     ecx, esi
        call    dword ptr [edx + 0x4]
        mov     ecx, dword ptr [edi + 0x4]
        push    0x7723e8
        mov     esi, eax
        call    FUN_0040ed60
        push    0
        lea     ecx, [esp + 0x10]
        push    ecx
        push    0x797278
        mov     ecx, eax
        mov     dword ptr [esi + 0x2c], 0xffffffff
        call    FUN_00411bf0
        test    al, al
        jz      l_done
        mov     edx, dword ptr [esp + 0xc]
        push    edx
        call    FUN_005b7620
        add     esp, 4
        mov     dword ptr [esi + 0x2c], eax
    l_done:
        pop     edi
        pop     esi
        ret
    }
}
