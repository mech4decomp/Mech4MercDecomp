/*
 * FUN_10001450 (194 B) — __stdcall, RET 0x4.
 * Registry helper: creates/opens a key (IAT 0x1004901c), copies a
 * string into a local buffer, builds a value record from globals
 * 0x100500a4..0x100500b0, writes it via IAT 0x10049020, and closes
 * the key via IAT 0x10049014.
 *
 * CFLAGS: /O1
 */

extern void *g_1004901c;   /* IAT: RegCreateKeyExA */
extern void *g_10049014;   /* IAT: RegCloseKey */
extern void *g_10049020;   /* IAT: RegSetValueExA */
extern unsigned int g_100500a4;
extern unsigned int g_100500a8;
extern unsigned int g_100500ac;
extern unsigned int g_100500b0;

__declspec(naked) void __stdcall FUN_10001450(void)
{
    __asm {
        sub     esp, 0x58
        push    ebx
        push    esi
        push    edi
        xor     edi, edi
        lea     eax, [esp + 0x10]
        push    eax
        lea     ecx, [esp + 0x10]
        push    ecx
        push    edi
        push    0x20006
        push    edi
        push    edi
        push    edi
        push    0x100500b4
        push    0x80000000
        mov     dword ptr [esp + 0x30], edi
        mov     dword ptr [esp + 0x34], edi
        mov     ebx, 0x80004005
        call    dword ptr [g_1004901c]
        test    eax, eax
        jnz     L_f8
        mov     esi, dword ptr [esp + 0xc]
        cmp     esi, edi
        jz      L_07
        push    ebp
        mov     ebp, dword ptr [esp + 0x6c]
        lea     edx, [esp + 0x18]
        mov     eax, ebp
        sub     edx, ebp
    L_a1:
        mov     cl, byte ptr [eax]
        mov     byte ptr [edx + eax], cl
        inc     eax
        test    cl, cl
        jnz     L_a1
        mov     edx, dword ptr [g_100500a4]
        xor     eax, eax
        lea     edi, [esp + 0x18]
        mov     ecx, 0xffffffff
        repne   scasb
        mov     eax, dword ptr [g_100500a8]
        mov     ecx, dword ptr [g_100500ac]
        dec     edi
        mov     dword ptr [edi], edx
        mov     edx, dword ptr [g_100500b0]
        mov     dword ptr [edi + 0x4], eax
        lea     eax, [esp + 0x18]
        push    eax
        mov     dword ptr [edi + 0x8], ecx
        push    esi
        mov     esi, dword ptr [g_10049020]
        mov     dword ptr [edi + 0xc], edx
        call    esi
        mov     ecx, dword ptr [esp + 0x10]
        push    ebp
        push    ecx
        call    esi
        test    eax, eax
        pop     ebp
        jnz     L_f8
        xor     ebx, ebx
    L_f8:
        mov     eax, dword ptr [esp + 0xc]
        test    eax, eax
        jz      L_07
        push    eax
        call    dword ptr [g_10049014]
    L_07:
        pop     edi
        pop     esi
        mov     eax, ebx
        pop     ebx
        add     esp, 0x58
        ret     0x4
    }
}
