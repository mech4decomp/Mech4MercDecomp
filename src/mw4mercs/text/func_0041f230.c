/*
 * FUN_0041f230 (57 B) — __thiscall serializer: converts an int arg to a
 * decimal string via _itoa, appends it through FUN_00412780, then sets a
 * flag byte in a nested object.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int (__cdecl *g_itoa_0076b2d4)(int, char *, int);
extern void __cdecl FUN_00412780(void);

__declspec(naked) void FUN_0041f230(void)
{
    __asm {
        sub     esp, 0xc
        push    esi
        push    0xa
        lea     eax, [esp+0x8]
        mov     esi, ecx
        mov     ecx, dword ptr [esp+0x18]
        push    eax
        push    ecx
        call    dword ptr [g_itoa_0076b2d4]
        add     esp, 0xc
        lea     edx, [esp+0x4]
        push    edx
        lea     ecx, [esi+0x18]
        call    FUN_00412780
        mov     eax, dword ptr [esi+0x10]
        mov     ecx, dword ptr [eax+0x10]
        mov     byte ptr [ecx+0x4], 0x1
        pop     esi
        add     esp, 0xc
        ret     0x4
    }
}
