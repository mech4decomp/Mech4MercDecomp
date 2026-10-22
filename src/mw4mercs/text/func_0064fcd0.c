/*
 * FUN_0064fcd0 (80 B) — library lookup helper.
 *
 * Calls FUN_0064ff50(&DAT_007f3254, (&DAT_0080da24)[DAT_008058c0]); on
 * failure calls FUN_00650120(...) and stores result; on success calls
 * FUN_00562f40(0xe). Stores result at [esp+4].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_0064ff50(void *a, int b);
extern void *__cdecl FUN_00650120(void *a, void *b);
extern void __cdecl FUN_00562f40(int a);

extern int g_8058c0;
extern int g_80da24;

__declspec(naked) void FUN_0064fcd0(void)
{
    __asm {
        mov     eax, dword ptr [g_8058c0]
        mov     ecx, dword ptr [eax*4 + 0x80da24]
        push    esi
        push    ecx
        push    0x7f3254
        call    FUN_0064ff50
        mov     esi, dword ptr [esp + 0x10]
        add     esp, 0x8
        test    eax, eax
        mov     dword ptr [esi], eax
        jnz     L_error
        mov     edx, dword ptr [g_8058c0]
        lea     eax, [edx*4 + 0x80da24]
        push    eax
        push    0x7f3254
        call    FUN_00650120
        add     esp, 0x8
        mov     dword ptr [esi], eax
        pop     esi
        ret
    L_error:
        push    0xe
        call    FUN_00562f40
        add     esp, 0x4
        pop     esi
        ret
    }
}
