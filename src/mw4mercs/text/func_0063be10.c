/*
 * FUN_0063be10 (106 B) — __thiscall (this in ECX, RET).
 *
 * Iterates [this+0x18] times calling FUN_0041fd80 on [this+0x10],
 * setting a flag byte at [ret+0x15c]. Then, if g_7f2d28 is set,
 * dispatches through a global object's vtable. Sets [this+0x1c]=1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_7f2d28;    /* 0x007f2d28 */
extern int  *g_7f2d24;   /* 0x007f2d24 */
extern void __cdecl FUN_0041fd80(void);

__declspec(naked) void FUN_0063be10(void)
{
    __asm {
        push    ebp
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x18]
        push    edi
        xor     edi, edi
        test    eax, eax
        jle     L_3a
        lea     ebp, [esi + 0x10]
    L_21:
        mov     ecx, ebp
        call    FUN_0041fd80
        mov     eax, dword ptr [eax + 0x15c]
        mov     byte ptr [eax + edi*1], 0x1
        mov     eax, dword ptr [esi + 0x18]
        inc     edi
        cmp     edi, eax
        __emit  0x7C          /* __emit: backward jl L_21; MSVC6 rel off-by-4 (call reloc between branch & target) */
        __emit  0xE7
    L_3a:
        mov     al, byte ptr [g_7f2d28]
        test    al, al
        jz      L_72
        mov     ecx, dword ptr [g_7f2d24]
        mov     ebp, dword ptr [ecx]
        lea     edi, [esi + 0x10]
        mov     ecx, edi
        call    FUN_0041fd80
        mov     ecx, dword ptr [g_7f2d24]
        push    eax
        call    dword ptr [ebp + 0x8]
        mov     ecx, edi
        call    FUN_0041fd80
        mov     ecx, eax
        call    dword ptr [eax + 0x1c]
        mov     byte ptr [g_7f2d28], 0x0
    L_72:
        pop     edi
        mov     byte ptr [esi + 0x1c], 0x1
        pop     esi
        pop     ebp
        ret
    }
}
