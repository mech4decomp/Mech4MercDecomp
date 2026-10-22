/*
 * FUN_00509490 (177 B) — __thiscall string formatting helper.
 *
 * Compares 16-bit fields and conditionally formats strings.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern int __fastcall FUN_00502370(void *this, int dummy, void *p1, void *p2);
extern int __fastcall FUN_0040ED60(void *this, int dummy, const char *str);
extern int __fastcall FUN_00411C40(void *this, int dummy, const char *fmt, ...);
extern int __fastcall FUN_004D1F80(void *this, int dummy, int a, int b);
extern int __fastcall FUN_004D21C0(void *this, int dummy, int a, int b);

extern short g_7db0ac;   /* 0x007DB0AC */
extern short g_7db0ae;   /* 0x007DB0AE */

__declspec(naked) void FUN_00509490(void)
{
    __asm {
        sub     esp, 0x44
        push    esi
        mov     esi, [esp + 0x50]       ; param1
        push    edi
        mov     edi, [esp + 0x50]       ; param2 (after push, same slot)
        push    esi
        push    edi
        call    FUN_00502370
        add     esp, 8

        push    0x7723E8                ; string constant
        mov     ecx, esi
        call    FUN_0040ED60            ; construct string object

        mov     cx, [edi + 0x1c]        ; load 16-bit field
        cmp     cx, word ptr [g_7db0ac]
        mov     esi, eax                ; save return value
        lea     eax, [edi + 0x1c]       ; address of field
        jnz     l_check2_body

        mov     dx, [eax + 2]           ; load next 16-bit field
        cmp     dx, word ptr [g_7db0ae]
        jz      l_skip1                 ; if both match, skip

    l_check2_body:
        push    1
        push    eax
        lea     ecx, [esp + 0x10]
        call    FUN_004D1F80            ; format

        mov     eax, [esp + 0x30]       ; load local
        push    eax
        push    0x77721C                ; format string
        mov     ecx, esi
        call    FUN_00411C40            ; format

        lea     ecx, [esp + 0x08]
        call    FUN_004D21C0            ; cleanup

    l_skip1:
        mov     cx, word ptr [g_7db0ac]
        cmp     [edi + 0x20], cx        ; compare with field at +0x20
        lea     eax, [edi + 0x20]       ; address of field
        jnz     l_check4_body

        mov     dx, word ptr [g_7db0ae]
        cmp     [eax + 2], dx           ; compare with field at +0x22
        jz      l_done                  ; if both match, done

    l_check4_body:
        push    1
        push    eax
        lea     ecx, [esp + 0x10]
        call    FUN_004D1F80            ; format

        mov     eax, [esp + 0x30]       ; load local
        push    eax
        push    0x777210                ; format string
        mov     ecx, esi
        call    FUN_00411C40            ; format

        lea     ecx, [esp + 0x08]
        call    FUN_004D21C0            ; cleanup

    l_done:
        pop     edi
        pop     esi
        add     esp, 0x44
        ret
    }
}
