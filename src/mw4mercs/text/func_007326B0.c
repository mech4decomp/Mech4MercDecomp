/*
 * In-.text data block 0x7326B0 (439 B) — single __stdcall function (RET 0xc,
 * 3 params). Parses a packed byte-string (indexed via the 0x896b88 lookup
 * table) into a running count, accumulating into [esp+0x44], and computes a
 * float result from globals 0x8816b0/0x8816b8/0x8816bc/0x8816d8/0x76dd60.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0075DB4A(void);
extern void __cdecl FUN_00731A50(void);
extern void __cdecl FUN_00731C20(void);
extern float g_8816B0;
extern float g_8816B8;
extern int g_8816BC;
extern unsigned char g_8816DD;
extern float g_8816D8;
extern float g_76DD60;

__declspec(naked) void FUN_007326B0(void)
{
    __asm {
        sub     esp, 0x30
        fld     dword ptr [g_8816B0]
        push    ebx
        fsub    dword ptr [g_8816B8]
        push    ebp
        push    esi
        xor     esi, esi
        push    edi
        mov     dword ptr [esp + 0x14], esi
        mov     dword ptr [esp + 0x1c], esi
        mov     byte ptr [esp + 0x13], 0
        call    FUN_0075DB4A
        fild    dword ptr [g_8816BC]
        mov     ebx, dword ptr [esp + 0x44]
        mov     edi, eax
        lea     eax, [esp + 0x13]
        fstp    dword ptr [esp + 0x20]
        push    eax
        lea     ecx, [esp + 0x20]
        push    ecx
        lea     edx, [esp + 0x1c]
        push    edx
        push    ebx
        mov     dword ptr [esp + 0x28], edi
        call    FUN_00731A50
        mov     ebp, eax
        mov     eax, dword ptr [esp + 0x14]
        test    eax, eax
        mov     dword ptr [esp + 0x44], esi
        je      L73283D
L732712:
        cmp     ebp, edi
        mov     dword ptr [esp + 0x30], 0
        jle     L73278C
L73271E:
        xor     eax, eax
        mov     al, byte ptr [ebx]
        mov     cl, byte ptr [eax + 0x896b88]
        test    cl, cl
        lea     edi, [eax + 0x896b88]
        je      L73273E
        xor     ecx, ecx
        mov     cl, byte ptr [ebx + 1]
        shl     eax, 8
        mov     edx, ecx
        add     eax, edx
L73273E:
        push    eax
        lea     eax, [esp + 0x30]
        push    eax
        lea     ecx, [esp + 0x2c]
        push    ecx
        call    FUN_00731C20
        mov     edx, dword ptr [esp + 0x24]
        mov     ecx, dword ptr [esp + 0x18]
        lea     eax, [edx + esi]
        cmp     eax, ecx
        jae     L732784
        mov     esi, eax
        cmp     byte ptr [edi], 0
        je      L732770
        mov     eax, dword ptr [esp + 0x14]
        add     ebx, 2
        sub     eax, 2
        jmp     L732776
L732770:
        mov     eax, dword ptr [esp + 0x14]
        inc     ebx
        dec     eax
L732776:
        test    eax, eax
        mov     dword ptr [esp + 0x14], eax
        jne     L73271E
        mov     edi, dword ptr [esp + 0x18]
        jmp     L7327EC
L732784:
        mov     eax, dword ptr [esp + 0x14]
        mov     edi, dword ptr [esp + 0x18]
L73278C:
        test    eax, eax
        je      L7327EC
L732790:
        mov     cl, byte ptr [g_8816DD]
        test    cl, cl
        je      L7327A1
        lea     ecx, [esi + ebp]
        cmp     ecx, edi
        jg      L7327EC
L7327A1:
        mov     cl, byte ptr [esp + 0x13]
        test    cl, cl
        jne     L7327EC
        mov     ecx, dword ptr [esp + 0x30]
        add     ecx, ebp
        add     esi, ebp
        cmp     esi, edi
        mov     dword ptr [esp + 0x30], ecx
        jle     L7327BB
        mov     esi, edi
L7327BB:
        cmp     esi, dword ptr [esp + 0x44]
        jle     L7327C5
        mov     dword ptr [esp + 0x44], esi
L7327C5:
        mov     edx, dword ptr [esp + 0x1c]
        add     edx, eax
        lea     eax, [esp + 0x13]
        push    eax
        add     ebx, edx
        lea     ecx, [esp + 0x20]
        push    ecx
        lea     edx, [esp + 0x1c]
        push    edx
        push    ebx
        call    FUN_00731A50
        mov     ebp, eax
        mov     eax, dword ptr [esp + 0x14]
        test    eax, eax
        jne     L732790
L7327EC:
        add     esi, ebp
        cmp     esi, edi
        jle     L7327F4
        mov     esi, edi
L7327F4:
        cmp     esi, dword ptr [esp + 0x44]
        jle     L7327FE
        mov     dword ptr [esp + 0x44], esi
L7327FE:
        fld     dword ptr [g_8816D8]
        xor     esi, esi
        fadd    dword ptr [g_76DD60]
        mov     byte ptr [esp + 0x13], 0
        fstp    dword ptr [esp + 0x28]
        mov     ecx, dword ptr [esp + 0x28]
        and     ecx, 0x7fffff
        sub     ecx, 0x400000
        test    eax, eax
        mov     dword ptr [esp + 0x28], ecx
        fild    dword ptr [esp + 0x28]
        fadd    dword ptr [esp + 0x20]
        fstp    dword ptr [esp + 0x20]
        jne     L732712
L73283D:
        fild    dword ptr [g_8816BC]
        fsubr   dword ptr [esp + 0x20]
        call    FUN_0075DB4A
        mov     edx, dword ptr [esp + 0x4c]
        mov     ecx, dword ptr [esp + 0x44]
        pop     edi
        inc     eax
        pop     esi
        mov     dword ptr [edx], eax
        mov     eax, dword ptr [esp + 0x40]
        pop     ebp
        mov     dword ptr [eax], ecx
        pop     ebx
        add     esp, 0x30
        ret     0xc
    }
}
