/*
 * FUN_0074ace0 (181 B) — Dispatches a "primitive type" draw call based on
 * param_6 (1/2/3) through a vtable method at [*g_ptr_85a248 + 0x64/0x68].
 * Falls through to FUN_006fab90("Unknown primitive type") for other values.
 *
 * __stdcall, RET 0x18 (6 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_byte_87c254;
extern void *g_ptr_85a248;
extern int g_arr_7b76b4[];
extern char g_str_7aa9a8[];   /* "Unknown primitive type" */

extern void __cdecl FUN_00713de0(void);
extern int __cdecl FUN_006fab90(const char *);

__declspec(naked) void __stdcall FUN_0074ace0(
    unsigned int p1, unsigned int p2, unsigned int p3, unsigned int p4,
    int p5, int p6)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     al, byte ptr [g_byte_87c254]
        test    al, al
        jz      L0
        call    FUN_00713de0
L0:
        mov     eax, dword ptr [ebp + 0x1C]
        dec     eax
        jz      L3
        dec     eax
        jz      L2
        dec     eax
        jz      L1
        push    offset g_str_7aa9a8
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        jz      Lend
        int     3
        pop     ebp
        ret     0x18
L1:
        mov     edx, dword ptr [ebp + 0x14]
        mov     eax, dword ptr [g_ptr_85a248]
        mov     ecx, dword ptr [eax]
        push    0
        push    edx
        mov     edx, dword ptr [ebp + 0x10]
        push    edx
        mov     edx, dword ptr [ebp + 0xC]
        push    edx
        mov     edx, dword ptr [ebp + 0x8]
        push    edx
        mov     edx, dword ptr [ebp + 0x18]
        mov     edx, dword ptr [edx * 4 + g_arr_7b76b4]
        push    edx
        push    4
        push    eax
        call    dword ptr [ecx + 0x68]
        pop     ebp
        ret     0x18
L2:
        mov     edx, dword ptr [ebp + 0x14]
        mov     eax, dword ptr [g_ptr_85a248]
        mov     ecx, dword ptr [eax]
        push    0
        push    edx
        mov     edx, dword ptr [ebp + 0x10]
        push    edx
        mov     edx, dword ptr [ebp + 0xC]
        push    edx
        mov     edx, dword ptr [ebp + 0x8]
        push    edx
        mov     edx, dword ptr [ebp + 0x18]
        mov     edx, dword ptr [edx * 4 + g_arr_7b76b4]
        push    edx
        push    2
        push    eax
        call    dword ptr [ecx + 0x68]
        pop     ebp
        ret     0x18
L3:
        mov     edx, dword ptr [ebp + 0xC]
        mov     eax, dword ptr [g_ptr_85a248]
        mov     ecx, dword ptr [eax]
        push    0
        push    edx
        mov     edx, dword ptr [ebp + 0x8]
        push    edx
        mov     edx, dword ptr [ebp + 0x18]
        mov     edx, dword ptr [edx * 4 + g_arr_7b76b4]
        push    edx
        push    1
        push    eax
        call    dword ptr [ecx + 0x64]
Lend:
        pop     ebp
        ret     0x18
    }
}
