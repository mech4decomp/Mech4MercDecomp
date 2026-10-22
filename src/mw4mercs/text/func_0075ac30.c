/*
 * FUN_0075ac30 (71 B) — __cdecl, no args.
 *
 * Calls GetLocalTime (IAT 0x76b08c) into a stack SYSTEMTIME, then
 * wsprintfA (IAT 0x76b4f8) formats "%04d%02d%02d" into the global
 * buffer at 0x8bc210 and returns a pointer to it.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_76b08c;   /* GetLocalTime */
extern void *g_76b4f8;   /* wsprintfA */
extern char g_str_7af144[];
extern char g_buf_8bc210[];

__declspec(naked) char *__cdecl FUN_0075ac30(void)
{
    __asm {
        sub     esp, 0x10
        __emit 0x8D   /* __emit: MSVC6 drops the zero displacement in lea eax,[esp], emitting 8D 04 24 instead of ref 8D 44 24 00 */
        __emit 0x44
        __emit 0x24
        __emit 0x00
        push    eax
        call    dword ptr [g_76b08c]
        mov     ecx, dword ptr [esp + 6]
        mov     edx, dword ptr [esp + 2]
        __emit 0x8B   /* __emit: MSVC6 drops the zero displacement in mov eax,[esp], emitting 8B 04 24 instead of ref 8B 44 24 00 */
        __emit 0x44
        __emit 0x24
        __emit 0x00
        and     ecx, 0xFFFF
        push    ecx
        and     edx, 0xFFFF
        push    edx
        and     eax, 0xFFFF
        push    eax
        push    offset g_str_7af144
        push    offset g_buf_8bc210
        call    dword ptr [g_76b4f8]
        mov     eax, offset g_buf_8bc210
        add     esp, 0x24
        ret
    }
}
