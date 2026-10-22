/*
 * FUN_00506160 (677 B) — method with loop, decryption pattern, and many
 * external calls.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_00501b70(void);
extern void __cdecl FUN_0040dd50(void);
extern void __cdecl FUN_00412390(void);
extern void *__cdecl FUN_004084c0(int size, int a);
extern void __cdecl FUN_004c41d0(void);
extern void __cdecl FUN_00417a40(void);
extern void __cdecl FUN_004084e0(void *ptr);
extern void __cdecl FUN_0040de20(void);
extern void __cdecl FUN_006fab90(void);
extern void __cdecl FUN_004d2000(void);
extern void __cdecl FUN_004d24f0(void);
extern void __cdecl FUN_004d2680(void);
extern void __cdecl FUN_004cfbd0(void);
extern void __cdecl FUN_0041ee70(void);
extern void __cdecl FUN_004d0600(void);
extern void __cdecl FUN_004fca80(void);
extern void __cdecl FUN_004cfc90(void);
extern void __cdecl FUN_0041ef60(void);
extern void __cdecl FUN_004d21c0(void);

extern int g_7b8810;
extern short g_7db0ac;
extern short g_7db0ae;
extern int g_7db0a0;
extern int g_7dab44;
extern int g_7dab40;

__declspec(naked) void func_00506160(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0xc4
        push    ebx
        mov     ebx, dword ptr [ebp + 8]
        push    esi
        mov     esi, dword ptr [ebx]
        mov     eax, dword ptr [esi]
        push    edi
        push    0x64
        mov     ecx, esi
        call    dword ptr [eax + 0x14]
        push    ebx
        call    FUN_00501b70
        mov     edx, dword ptr [esi]
        add     esp, 4
        mov     ecx, esi
        call    dword ptr [edx + 4]
        mov     edi, eax
        mov     eax, dword ptr [edi + 0x14]
        and     eax, 0xfffffff9
        or      eax, 1
        push    0
        lea     ecx, [ebp - 0xc4]
        mov     dword ptr [edi], 0x64
        mov     dword ptr [edi + 0x14], eax
        call    FUN_0040dd50
        push    0
        lea     ecx, [ebp - 0xc4]
        push    ecx
        mov     ecx, dword ptr [ebx + 4]
        push    0x775b14
        call    FUN_00412390
        mov     edx, dword ptr [g_7b8810]
        push    edx
        push    0xc
        call    FUN_004084c0
        mov     esi, eax
        add     esp, 8
        test    esi, esi
        jz      l_ee
        lea     eax, [ebp - 0x80]
        push    eax
        mov     ecx, esi
        call    FUN_004c41d0
        mov     dword ptr [esi], 0x76cd64
        mov     dword ptr [ebp + 8], esi
        jmp     l_f8
    l_ee:
        mov     dword ptr [ebp + 8], 0
        mov     esi, dword ptr [ebp + 8]
    l_f8:
        mov     ecx, dword ptr [esi + 4]
        call    FUN_00417a40
        test    eax, eax
        jnz     l_35
        mov     cx, word ptr [g_7db0ac]
        mov     dx, word ptr [g_7db0ae]
        push    esi
        mov     word ptr [edi + 0x60], cx
        mov     word ptr [edi + 0x62], dx
        call    FUN_004084e0
        add     esp, 4
        lea     ecx, [ebp - 0xc4]
        call    FUN_0040de20
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    l_35:
        push    0x7723bc
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        jz      l_47
        int     3
    l_47:
        mov     eax, dword ptr [ebp - 0xc4]
        push    0
        push    eax
        lea     ecx, [ebp - 0x74]
        call    FUN_004d2000
        mov     eax, dword ptr [ebp - 0x38]
        test    eax, eax
        jz      l_a9
        mov     eax, dword ptr [ebp - 0x58]
        test    eax, eax
        jbe     l_a9
        lea     ecx, [ebp - 0x74]
        call    FUN_004d24f0
        test    al, al
        jz      l_a9
        mov     edx, dword ptr [ebp - 0x74]
        push    2
        lea     ecx, [ebp + 8]
        push    ecx
        lea     ecx, [ebp - 0x74]
        call    dword ptr [edx + 0x20]
        mov     ax, word ptr [ebp + 8]
        mov     ebx, dword ptr [ebx + 8]
        add     word ptr [ebx + 2], ax
        mov     cx, word ptr [ebp + 8]
        add     word ptr [edi + 0x1a], cx
        mov     dx, word ptr [ebp - 0x34]
        mov     word ptr [edi + 0x60], dx
        mov     ax, word ptr [ebp - 0x32]
        mov     word ptr [edi + 0x62], ax
        jmp     l_e2
    l_a9:
        lea     ecx, [ebp - 0xc4]
        push    ecx
        mov     ecx, dword ptr [g_7db0a0]
        call    FUN_004cfbd0
        push    2
        lea     ecx, [ebp - 0x30]
        call    FUN_0041ee70
        mov     eax, dword ptr [ebp - 0x30]
        push    2
        lea     edx, [ebp - 4]
        push    edx
        lea     ecx, [ebp - 0x30]
        mov     dword ptr [ebp - 4], 0
        call    dword ptr [eax + 0x24]
        mov     ebx, dword ptr [ebx + 8]
        mov     cx, word ptr [ebx + 2]
        mov     word ptr [ebp - 6], cx
        mov     ecx, dword ptr [ebp - 0x1c]
        mov     dword ptr [ebp - 4], ebx
        jmp     l_f1
    l_ee2:
        mov     esi, dword ptr [ebp + 8]
    l_f1:
        mov     edx, dword ptr [esi + 8]
        test    edx, edx
        jz      l_54
        mov     eax, dword ptr [edx]
        test    eax, eax
        mov     edx, dword ptr [edx + 4]
        mov     dword ptr [esi + 8], edx
        jz      l_54
        mov     ecx, dword ptr [ebp - 4]
        mov     ebx, dword ptr [eax + 0x14]
        push    ecx
        mov     ecx, dword ptr [g_7db0a0]
        push    eax
        lea     edx, [ebp - 0x30]
        push    edx
        call    FUN_004d0600
        mov     ecx, dword ptr [g_7dab44]
        mov     edx, dword ptr [ecx]
        mov     esi, eax
        mov     eax, dword ptr [g_7dab40]
        xor     eax, edx
        mov     ecx, dword ptr [eax + 0x10]
        push    ebx
        xor     ecx, 0x85739531
        call    FUN_004fca80
        mov     edx, dword ptr [esi]
        mov     dword ptr [esi + 0x5c], eax
        mov     ecx, dword ptr [ebp - 0x1c]
        mov     eax, dword ptr [ebp - 0x18]
        add     ecx, edx
        cmp     ecx, eax
        mov     dword ptr [ebp - 0x1c], ecx
        jbe     l_ee2
        mov     dword ptr [ebp - 0x18], ecx
        jmp     l_ee2
    l_54:
        sub     ecx, dword ptr [ebp - 0x20]
        cmp     ecx, 2
        jbe     l_ba
        mov     edx, dword ptr [ebp - 0x30]
        push    0
        lea     ecx, [ebp - 0x30]
        call    dword ptr [edx + 0xc]
        mov     eax, dword ptr [ebp - 4]
        xor     ecx, ecx
        mov     dword ptr [ebp - 0x28], 0xffffffec
        mov     cx, word ptr [eax + 2]
        sub     cx, word ptr [ebp - 6]
        mov     eax, dword ptr [ebp - 0x30]
        push    2
        lea     edx, [ebp + 8]
        push    edx
        mov     dword ptr [ebp + 8], ecx
        lea     ecx, [ebp - 0x30]
        call    dword ptr [eax + 0x24]
        mov     cx, word ptr [ebp + 8]
        add     word ptr [edi + 0x1a], cx
        lea     edx, [ebp - 0xb8]
        push    edx
        lea     eax, [ebp - 0x30]
        push    eax
        lea     ecx, [ebp - 0x74]
        call    FUN_004d2680
        mov     cx, word ptr [ebp - 0x34]
        mov     word ptr [edi + 0x60], cx
        mov     dx, word ptr [ebp - 0x32]
        mov     word ptr [edi + 0x62], dx
        jmp     l_cf
    l_ba:
        mov     ax, word ptr [g_7db0ac]
        mov     cx, word ptr [g_7db0ae]
        mov     word ptr [edi + 0x60], ax
        mov     word ptr [edi + 0x62], cx
    l_cf:
        mov     ecx, dword ptr [g_7db0a0]
        call    FUN_004cfc90
        lea     ecx, [ebp - 0x30]
        call    FUN_0041ef60
    l_e2:
        push    esi
        call    FUN_004084e0
        add     esp, 4
        lea     ecx, [ebp - 0x74]
        call    FUN_004d21c0
        lea     ecx, [ebp - 0xc4]
        call    FUN_0040de20
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
