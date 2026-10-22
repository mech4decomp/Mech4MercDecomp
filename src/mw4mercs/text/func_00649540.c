/*
 * FUN_00649540 (105 B) — __cdecl (no args, RET).
 *
 * Reads a char from DAT_008058b0 and copies it into the buffer at
 * 0x008050ac and the pointer at 0x007b5a20 until it hits 0x7f or '"'.
 * Then terminates both buffers and resets counters.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char *g_7b5a20;   /* 0x007b5a20 */
extern char g_8058b0;    /* 0x008058b0 */
extern char g_8050ac;    /* 0x008050ac */
extern int  g_8058ac;    /* 0x008058ac */
extern int  g_8050a0;    /* 0x008050a0 */
extern void __cdecl FUN_00648fe0(void);

__declspec(naked) void FUN_00649540(void)
{
    __asm {
        mov     eax, dword ptr [g_7b5a20]
        push    esi
        mov     esi, 0x8050ac
        mov     byte ptr [eax], 0x22
        call    FUN_00648fe0
        mov     al, byte ptr [g_8058b0]
        cmp     al, 0x7f
        jz      L_80
        cmp     al, 0x22
        jz      L_80
    L_5c:
        mov     ecx, dword ptr [g_7b5a20]
        mov     byte ptr [ecx], al
        inc     ecx
        mov     byte ptr [esi], al
        mov     dword ptr [g_7b5a20], ecx
        inc     esi
        call    FUN_00648fe0
        mov     al, byte ptr [g_8058b0]
        cmp     al, 0x7f
        __emit  0x75          /* __emit: backward jnz L_5c; MSVC6 rel off-by-4 (call reloc between branch & target) */
        __emit  0xDC
    L_80:
        mov     ecx, dword ptr [g_7b5a20]
        mov     byte ptr [esi], 0x0
        mov     byte ptr [g_8058b0], 0x20
        mov     byte ptr [ecx], 0x0
        mov     dword ptr [g_8058ac], 0x4
        mov     dword ptr [g_8050a0], 0x2
        pop     esi
        ret
    }
}
