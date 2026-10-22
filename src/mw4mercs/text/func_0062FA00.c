/*
 * FUN_0062fa00 (365 B) — __cdecl, RET (one stack param at ESP+0x8).
 * Walks a linked list (via EBP), calls several helpers/virtual methods,
 * and frees a temporary buffer. Uses several global pointers/state.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7db0a0;
extern int g_7b8c10;
extern int g_7db0b0;
extern int g_7b8810;
extern char g_7dc694;
extern short g_7dc696;
extern void __cdecl FUN_004cfbd0(void);
extern void __cdecl FUN_00415180(void);
extern void __cdecl FUN_0041ee70(void);
extern void __cdecl FUN_00412b80(void);
extern void __cdecl FUN_004084c0(void);
extern void __cdecl FUN_00411ec0(void);
extern void __cdecl FUN_004d0600(void);
extern void __cdecl FUN_004084e0(void *);
extern void __cdecl FUN_004cfc90(void);
extern void __cdecl FUN_00412b60(void);

__declspec(naked) void __cdecl FUN_0062fa00(void)
{
    __asm {
        sub     esp, 0x44
        mov     ecx, dword ptr [g_7db0a0]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x5c]
        push    edi
        call    FUN_004cfbd0
        mov     eax, dword ptr [g_7b8c10]
        push    eax
        lea     ecx, [esp + 0x20]
        call    FUN_00415180
        xor     ebx, ebx
        push    ebx
        lea     ecx, [esp + 0x30]
        mov     dword ptr [esp + 0x28], ebx
        mov     dword ptr [esp + 0x2c], ebx
        mov     dword ptr [esp + 0x20], 0x76cd9c
        call    FUN_0041ee70
        lea     ecx, [edi + 0xc]
        push    ecx
        lea     ecx, [esp + 0x20]
        mov     dword ptr [esp + 0x20], 0x76d1f0
        call    FUN_00412b80
        mov     edx, dword ptr [g_7db0b0]
        mov     esi, dword ptr [esp + 0x58]
        lea     eax, [esp + 0x1c]
        mov     dword ptr [g_7db0b0], eax
        push    0x2
        lea     eax, [esp + 0x60]
        mov     dword ptr [esp + 0x14], edx
        mov     edx, dword ptr [esi]
        push    eax
        mov     ecx, esi
        mov     dword ptr [esp + 0x64], ebx
        call    dword ptr [edx + 0x24]
        mov     eax, dword ptr [g_7b8810]
        mov     cl, byte ptr [g_7dc694]
        mov     dx, word ptr [g_7dc696]
        push    eax
        push    0xc
        mov     byte ptr [esp + 0x1c], cl
        mov     word ptr [esp + 0x1e], dx
        call    FUN_004084c0
        add     esp, 0x8
        cmp     eax, ebx
        jz      L_62fabf
        lea     ecx, [edi + 0x44]
        mov     dword ptr [eax + 0x4], ecx
        mov     ecx, dword ptr [ecx]
        mov     dword ptr [eax + 0x8], ecx
        mov     dword ptr [eax], 0x76cd64
        mov     ebp, eax
        jmp     L_62fac1
L_62fabf:
        xor     ebp, ebp
L_62fac1:
        mov     eax, dword ptr [ebp + 0x8]
        cmp     eax, ebx
        jz      L_62fb0e
        mov     edi, dword ptr [eax]
        cmp     edi, ebx
        mov     edx, dword ptr [eax + 0x4]
        mov     dword ptr [ebp + 0x8], edx
        jz      L_62fb0e
        push    ebx
        lea     eax, [esp + 0x60]
        push    eax
        push    0x78d1ec
        mov     ecx, edi
        mov     byte ptr [esp + 0x68], bl
        call    FUN_00411ec0
        cmp     byte ptr [esp + 0x5c], bl
        jz      L_62fac1
        lea     ecx, [esp + 0x14]
        push    ecx
        mov     ecx, dword ptr [g_7db0a0]
        push    edi
        push    esi
        call    FUN_004d0600
        mov     eax, dword ptr [eax]
        mov     edx, dword ptr [esi]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x18]
        jmp     L_62fac1
L_62fb0e:
        mov     ecx, dword ptr [esi + 0x14]
        sub     ecx, dword ptr [esi + 0x10]
        cmp     ecx, 0x2
        jbe     L_62fb3e
        mov     edx, dword ptr [esi]
        push    ebx
        mov     ecx, esi
        call    dword ptr [edx + 0xc]
        mov     eax, dword ptr [esp + 0x16]
        mov     edx, dword ptr [esi]
        mov     dword ptr [esp + 0x5c], eax
        push    0x2
        lea     eax, [esp + 0x60]
        push    eax
        mov     ecx, esi
        mov     dword ptr [esi + 0x8], 0xffffffec
        call    dword ptr [edx + 0x24]
L_62fb3e:
        mov     ecx, dword ptr [esp + 0x10]
        push    ebp
        mov     dword ptr [g_7db0b0], ecx
        call    FUN_004084e0
        mov     ecx, dword ptr [g_7db0a0]
        add     esp, 0x4
        call    FUN_004cfc90
        lea     ecx, [esp + 0x1c]
        call    FUN_00412b60
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x44
        ret
    }
}
