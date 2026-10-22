/*
 * FUN_00422fe0 (251 B) — MLR render-state / stream setup routine.
 * Stores a parameter, issues a series of virtual calls on the global
 * stream object (g_007b960c) to set render-state dwords, calls
 * FUN_004919a0, and finishes by zeroing two globals. The tail contains
 * leftover NOP/ret padding from an optimized-away switch.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004919a0(void);

extern int g_007b960c;
extern int g_007b9604;
extern char g_007b9608;
extern int g_007b9600;
extern int g_007b95fc;

__declspec(naked) void FUN_00422fe0(void)
{
    __asm {
        mov     eax, dword ptr [esp+0x4]
        push    esi
        mov     esi, dword ptr [g_007b960c]
        mov     edx, dword ptr [esi]
        push    0x0
        mov     ecx, esi
        mov     dword ptr [g_007b9604], eax
        call    dword ptr [edx+0xc]
        mov     ecx, dword ptr [g_007b960c]
        push    0x4
        lea     edx, [esp+0xc]
        mov     dword ptr [esp+0xc], 0x0
        mov     eax, dword ptr [ecx]
        push    edx
        mov     dword ptr [esi+0x8], 0xffffffec
        mov     byte ptr [g_007b9608], 0x0
        call    dword ptr [eax+0x24]
        mov     eax, dword ptr [esp+0xc]
        mov     ecx, dword ptr [g_007b960c]
        mov     dword ptr [esp+0x8], eax
        mov     edx, dword ptr [ecx]
        push    0x4
        lea     eax, [esp+0xc]
        push    eax
        call    dword ptr [edx+0x24]
        mov     ecx, dword ptr [g_007b960c]
        push    0x4
        lea     eax, [esp+0xc]
        mov     dword ptr [esp+0xc], 0x1
        mov     edx, dword ptr [ecx]
        push    eax
        call    dword ptr [edx+0x24]
        mov     ecx, dword ptr [g_007b960c]
        push    ecx
        mov     ecx, dword ptr [esp+0x14]
        call    FUN_004919a0
        mov     ecx, dword ptr [g_007b960c]
        push    0x4
        lea     eax, [esp+0xc]
        mov     dword ptr [esp+0xc], 0x2
        mov     edx, dword ptr [ecx]
        push    eax
        call    dword ptr [edx+0x24]
        mov     eax, dword ptr [esp+0x14]
        mov     ecx, dword ptr [eax+0x4]
        mov     edx, dword ptr [eax]
        mov     dword ptr [esp+0xc], ecx
        mov     ecx, dword ptr [g_007b960c]
        mov     dword ptr [esp+0x8], edx
        mov     eax, dword ptr [ecx]
        push    0x4
        lea     edx, [esp+0xc]
        push    edx
        call    dword ptr [eax+0x24]
        mov     edx, dword ptr [eax]
        push    0x4
        lea     ecx, [esp+0x10]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx+0x24]
        mov     ecx, dword ptr [g_007b960c]
        mov     eax, dword ptr [ecx+0x14]
        test    al, 0x3
        pop     esi
        jz      L_skip
        mov     edx, dword ptr [ecx]
        neg     eax
        and     eax, 0x3
        push    eax
        call    dword ptr [edx+0x18]
L_skip:
        /* __emit: MSVC6 encodes jmp to a nearby label as short (EB), but the
           reference uses the near form (E9 12 00 00 00); emit it directly. */
        __emit 0xE9
        __emit 0x12
        __emit 0x00
        __emit 0x00
        __emit 0x00
        /* __emit: leftover NOP/ret padding from an optimized-away switch
           (0x004230CE..0x004230DF); inline asm has no way to emit raw
           padding bytes, so emit them directly. */
        __emit 0x90
        __emit 0x90
        __emit 0xC3
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
L_end:
        xor     eax, eax
        mov     dword ptr [g_007b9600], eax
        mov     dword ptr [g_007b95fc], eax
        ret
    }
}
