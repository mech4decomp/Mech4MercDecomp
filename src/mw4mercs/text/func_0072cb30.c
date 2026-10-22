/*
 * FUN_0072cb30 (676 B) — font/character-table setup.
 *
 * Loads a font resource via a set of IAT function pointers, builds a
 * character lookup table (DAT_00881a64..) either from wide chars (wctomb)
 * or from a byte table, then calls FUN_0072d120. __stdcall RET 4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_8aad68;
extern void *g_8aad34;
extern void *g_8aad2c;
extern int g_881a5c;
extern char g_881a64;
extern char g_881b64;
extern char g_881c64;
extern char g_881d64;
extern int g_881a60;
extern void *g_76b35c;   /* IAT: wctomb */
extern char g_896b88[];
extern void *g_8aad28;
extern void *g_8aad30;
extern void *g_8aad64;
extern char g_8825c4;
extern char g_8825c5;
extern int g_88172c;
extern char g_881730;
extern void __cdecl FUN_0072c970(void);
extern void __cdecl FUN_0072d120(void);

__declspec(naked) void FUN_0072cb30(void)
{
    __asm {
        sub     esp, 0x14
        push    ebx
        push    ebp
        push    esi
        push    edi
        call    FUN_0072c970
        mov     ebp, eax
        xor     ebx, ebx
        cmp     ebp, ebx
        mov     dword ptr [esp + 0x20], ebp
        jz      L_72cdca
        mov     eax, dword ptr [esp + 0x28]
        push    eax
        call    dword ptr [g_8aad68]
        cmp     eax, ebx
        mov     dword ptr [esp + 0x1c], eax
        jz      L_72cdca
        push    eax
        call    dword ptr [g_8aad34]
        mov     esi, eax
        xor     edi, edi
        xor     al, al
        cmp     ebp, 0x50000
        mov     dword ptr [esp + 0x18], esi
        mov     dword ptr [esp + 0x14], ebx
        ja      L_72cbdf
        jz      L_72cbbb
        cmp     ebp, 0x40002
        jc      L_72cc11
        cmp     ebp, 0x40004
        ja      L_72cc11
        mov     ecx, dword ptr [esi + 0x124]
        push    ecx
        call    dword ptr [g_8aad2c]
        mov     eax, dword ptr [eax + 0x18]
        mov     edx, dword ptr [eax + 0xa0]
        mov     edi, dword ptr [eax + 0x9c]
        mov     dword ptr [esp + 0x14], edx
        lea     ebx, [eax + 0x38]
        jmp     L_72cc0f
L_72cbbb:
        mov     eax, dword ptr [esi + 0x124]
        push    eax
        call    dword ptr [g_8aad2c]
        mov     ecx, dword ptr [eax + 0xc]
        mov     ebx, dword ptr [ecx + 0x20]
        mov     edx, dword ptr [ebx + 0x54]
        mov     edi, dword ptr [ebx + 0x50]
        add     ebx, 0x40
        mov     dword ptr [esp + 0x14], edx
        xor     al, al
        jmp     L_72cc11
L_72cbdf:
        cmp     ebp, 0x50001
        jc      L_72cc11
        cmp     ebp, 0x50002
        ja      L_72cc11
        mov     eax, dword ptr [esi + 0x124]
        push    eax
        call    dword ptr [g_8aad2c]
        mov     ecx, dword ptr [eax + 0x4]
        mov     ebx, dword ptr [ecx + 0x18]
        mov     edx, dword ptr [ebx + 0x64]
        mov     edi, dword ptr [ebx + 0x60]
        mov     dword ptr [esp + 0x14], edx
        add     ebx, 0x40
L_72cc0f:
        mov     al, 0x1
L_72cc11:
        test    al, al
        mov     dword ptr [g_881a5c], edi
        mov     byte ptr [g_881a64], 0x0
        mov     byte ptr [g_881b64], 0x0
        mov     byte ptr [g_881c64], 0x0
        mov     byte ptr [g_881d64], 0x0
        mov     dword ptr [g_881a60], 0xffffffff
        jz      L_72ccac
        xor     ebp, ebp
        test    edi, edi
        jbe     L_72cca0
        mov     esi, 0x881a65
L_72cc4c:
        cmp     dword ptr [esp + 0x14], ebp
        ja      L_72cc61
        cmp     dword ptr [g_881a60], -0x1
        jnz     L_72cc61
        mov     dword ptr [g_881a60], ebp
L_72cc61:
        mov     ax, word ptr [ebx]
        lea     ecx, [esp + 0x10]
        mov     byte ptr [esp + 0x11], 0x0
        mov     byte ptr [esp + 0x12], 0x0
        push    eax
        push    ecx
        call    dword ptr [g_76b35c]
        mov     dl, byte ptr [esp + 0x18]
        mov     al, byte ptr [esp + 0x19]
        mov     byte ptr [esi - 1], dl
        add     esp, 0x8
        mov     byte ptr [esi], al
        mov     byte ptr [esi + 0x1], 0x0
        inc     ebp
        add     ebx, 0x2
        add     esi, 0x100
        cmp     ebp, edi
        jc      L_72cc4c
        mov     esi, dword ptr [esp + 0x18]
L_72cca0:
        shl     ebp, 0x8
        mov     byte ptr [ebp + 0x881a64], 0x0
        jmp     L_72cd14
L_72ccac:
        xor     ecx, ecx
        xor     ebp, ebp
        test    edi, edi
        jbe     L_72cd02
        mov     edx, 0x881a65
L_72ccb9:
        cmp     dword ptr [esp + 0x14], ecx
        ja      L_72ccce
        cmp     dword ptr [g_881a60], -0x1
        jnz     L_72ccce
        mov     dword ptr [g_881a60], ebp
L_72ccce:
        xor     eax, eax
        mov     al, byte ptr [ecx + ebx]
        mov     byte ptr [edx - 1], al
        mov     byte ptr [edx], 0x0
        mov     byte ptr [edx + 0x1], 0x0
        and     eax, 0xff
        cmp     byte ptr [eax + 0x896b88], 0x0
        jz      L_72ccf6
        mov     al, byte ptr [ecx + ebx + 0x1]
        mov     esi, dword ptr [esp + 0x18]
        inc     ecx
        mov     byte ptr [edx], al
L_72ccf6:
        inc     ecx
        inc     ebp
        add     edx, 0x100
        cmp     ecx, edi
        jc      L_72ccb9
L_72cd02:
        mov     ecx, ebp
        shl     ecx, 0x8
        mov     byte ptr [ecx + 0x881a64], 0x0
        mov     dword ptr [g_881a5c], ebp
L_72cd14:
        mov     edx, dword ptr [esi + 0x124]
        push    edx
        call    dword ptr [g_8aad28]
        mov     esi, dword ptr [esp + 0x1c]
        push    esi
        call    dword ptr [g_8aad30]
        mov     eax, dword ptr [esp + 0x28]
        push    esi
        push    eax
        call    dword ptr [g_8aad64]
        mov     ecx, dword ptr [esp + 0x20]
        push    ecx
        mov     byte ptr [g_8825c4], 0x1
        call    FUN_0072d120
        mov     al, [g_8825c5]
        test    al, al
        jz      L_72cdca
        mov     eax, [g_881a5c]
        xor     edx, edx
        test    eax, eax
        mov     dword ptr [g_88172c], 0xffffffff
        mov     byte ptr [g_881730], 0x0
        jbe     L_72cdca
        mov     ebx, 0x881a64
L_72cd73:
        cmp     dword ptr [g_881a60], edx
        jnz     L_72cd90
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x881730
        repne   scasb
        not     ecx
        dec     ecx
        mov     dword ptr [g_88172c], ecx
L_72cd90:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, ebx
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebp, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x881730
        repne   scasb
        mov     eax, [g_881a5c]
        dec     edi
        mov     ecx, ebp
        shr     ecx, 0x2
        rep     movsd
        mov     ecx, ebp
        and     ecx, 0x3
        inc     edx
        add     ebx, 0x100
        cmp     edx, eax
        rep     movsb
        jc      L_72cd73
L_72cdca:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x14
        ret     0x4
    }
}
