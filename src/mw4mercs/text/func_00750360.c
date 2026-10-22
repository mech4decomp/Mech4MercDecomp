/*
 * FUN_00750360 (77 B) — __stdcall (RET 0x18, 6 params). Builds a debug
 * string into the global buffer at 0x008b9d94 via sprintf (IAT
 * 0x0076b420), using FUN_0074fd00 and FUN_00750300 to produce two of the
 * formatted values. Returns the buffer address.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0074fd00(void *p);
extern void __stdcall FUN_00750300(void *dst, void *a, void *b);
extern int (__cdecl *g_sprintf)(const char *fmt, ...);

__declspec(naked) void *__stdcall FUN_00750360(void *param_1, void *param_2,
                                               void *param_3, void *param_4,
                                               void *param_5, void *param_6)
{
    __asm {
        mov     eax, dword ptr [esp + 0x18]
        sub     esp, 0x20
        push    eax
        call    FUN_0074fd00
        mov     ecx, dword ptr [esp + 0x34]
        push    eax
        push    ecx
        lea     edx, [esp + 0x8]
        push    edx
        call    FUN_00750300
        mov     ecx, dword ptr [esp + 0x30]
        mov     edx, dword ptr [esp + 0x2c]
        push    eax
        mov     eax, dword ptr [esp + 0x38]
        push    eax
        mov     eax, dword ptr [esp + 0x30]
        push    ecx
        push    edx
        push    eax
        push    0x7acc40
        push    0x8b9d94
        call    dword ptr [g_sprintf]
        mov     eax, 0x8b9d94
        add     esp, 0x40
        ret     0x18
    }
}
