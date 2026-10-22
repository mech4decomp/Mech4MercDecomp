/*
 * FUN_00675620 (556 B) — Loads hit-effect / crater config data via the
 * GameData string-table API and stores results into a game object.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned short g_7db0ac;
extern unsigned short g_7db0ae;
extern int g_7db0b0;
extern int g_7b8c10;
extern char g_7723e8[];
extern char g_797740[];
extern char g_797728[];
extern char g_795558[];
extern char g_76cd9c[];
extern char g_76d1f0[];

extern void __cdecl FUN_00507b10(void *a);
extern void __cdecl FUN_0040ed60(char *a);
extern void __cdecl FUN_0040dd50(int a);
extern int __cdecl FUN_00412390(char *a, void *b, int c);
extern void __cdecl FUN_00415180(int a);
extern void __cdecl FUN_0041ee70(int a);
extern void __cdecl FUN_00412b80(void *a);
extern void *__cdecl FUN_0062f6e0(void *a, void *b, int c);
extern void __cdecl FUN_00412e70(void *a);
extern void __cdecl FUN_00412b60(void);
extern int __cdecl FUN_00411bf0(char *a, void *b, int c);
extern void __cdecl FUN_00412570(int a);
extern int __cdecl FUN_00412ab0(int a);
extern void __cdecl FUN_004084e0(char *a);
extern void __cdecl FUN_0040de20(void);

__declspec(naked) void FUN_00675620(void *param_1)
{
    __asm {
        sub     esp, 0x90
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0xa4]
        mov     esi, dword ptr [edi]
        mov     eax, dword ptr [esi]
        push    0x78
        mov     ecx, esi
        call    dword ptr [eax + 0x14]
        push    edi
        call    FUN_00507b10
        mov     edx, dword ptr [esi]
        add     esp, 0x4
        mov     ecx, esi
        call    dword ptr [edx + 0x4]
        mov     cx, word ptr [g_7db0ae]
        mov     esi, eax
        mov     ax, word ptr [g_7db0ac]
        mov     word ptr [esi + 0x52], cx
        mov     ecx, dword ptr [edi + 0x4]
        push    offset g_7723e8
        mov     word ptr [esi + 0x50], ax
        call    FUN_0040ed60
        xor     ebp, ebp
        push    ebp
        lea     ecx, [esp + 0x54]
        mov     ebx, eax
        call    FUN_0040dd50
        push    ebp
        lea     edx, [esp + 0x54]
        push    edx
        push    offset g_797740
        mov     ecx, ebx
        call    FUN_00412390
        test    al, al
        jz      loc_675725
        mov     eax, dword ptr [g_7b8c10]
        mov     edi, dword ptr [g_7db0b0]
        push    eax
        lea     ecx, [esp + 0x1c]
        call    FUN_00415180
        push    ebp
        lea     ecx, [esp + 0x2c]
        mov     dword ptr [esp + 0x24], ebp
        mov     dword ptr [esp + 0x28], ebp
        mov     dword ptr [esp + 0x1c], offset g_76cd9c
        call    FUN_0041ee70
        lea     ecx, [esp + 0x5c]
        push    ecx
        lea     ecx, [esp + 0x1c]
        mov     dword ptr [esp + 0x1c], offset g_76d1f0
        call    FUN_00412b80
        push    0x18
        lea     eax, [esp + 0x54]
        push    eax
        lea     ecx, [esp + 0x18]
        lea     edx, [esp + 0x20]
        push    ecx
        mov     dword ptr [g_7db0b0], edx
        call    FUN_0062f6e0
        mov     dx, word ptr [eax]
        mov     ax, word ptr [eax + 0x2]
        add     esp, 0xc
        lea     ecx, [esp + 0x18]
        push    ecx
        mov     ecx, edi
        mov     word ptr [esi + 0x50], dx
        mov     word ptr [esi + 0x52], ax
        mov     dword ptr [g_7db0b0], edi
        call    FUN_00412e70
        lea     ecx, [esp + 0x18]
        call    FUN_00412b60
loc_675725:
        mov     dx, word ptr [g_7db0ac]
        mov     ax, word ptr [g_7db0ae]
        push    ebp
        lea     ecx, [esp + 0x54]
        push    ecx
        push    offset g_797728
        mov     ecx, ebx
        mov     word ptr [esi + 0x54], dx
        mov     word ptr [esi + 0x56], ax
        call    FUN_00412390
        test    al, al
        jz      loc_6757e2
        mov     edx, dword ptr [g_7b8c10]
        mov     edi, dword ptr [g_7db0b0]
        push    edx
        lea     ecx, [esp + 0x1c]
        call    FUN_00415180
        push    ebp
        lea     ecx, [esp + 0x2c]
        mov     dword ptr [esp + 0x24], ebp
        mov     dword ptr [esp + 0x28], ebp
        mov     dword ptr [esp + 0x1c], offset g_76cd9c
        call    FUN_0041ee70
        lea     eax, [esp + 0x5c]
        push    eax
        lea     ecx, [esp + 0x1c]
        mov     dword ptr [esp + 0x1c], offset g_76d1f0
        call    FUN_00412b80
        push    0x18
        lea     edx, [esp + 0x54]
        push    edx
        lea     eax, [esp + 0x18]
        lea     ecx, [esp + 0x20]
        push    eax
        mov     dword ptr [g_7db0b0], ecx
        call    FUN_0062f6e0
        mov     cx, word ptr [eax]
        mov     dx, word ptr [eax + 0x2]
        add     esp, 0xc
        lea     eax, [esp + 0x18]
        mov     word ptr [esi + 0x54], cx
        push    eax
        mov     ecx, edi
        mov     word ptr [esi + 0x56], dx
        mov     dword ptr [g_7db0b0], edi
        call    FUN_00412e70
        lea     ecx, [esp + 0x18]
        call    FUN_00412b60
loc_6757e2:
        push    ebp
        lea     ecx, [esp + 0x18]
        push    ecx
        push    offset g_795558
        mov     ecx, ebx
        mov     dword ptr [esi + 0x70], 0xffffffff
        call    FUN_00411bf0
        test    al, al
        jz      loc_675838
        mov     edx, dword ptr [esp + 0x14]
        push    edx
        lea     ecx, [esp + 0x14]
        call    FUN_00412570
        mov     eax, dword ptr [esp + 0x10]
        push    eax
        call    FUN_00412ab0
        mov     dword ptr [esi + 0x70], eax
        mov     eax, dword ptr [esp + 0x14]
        add     esp, 0x4
        cmp     eax, ebp
        jz      loc_675838
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     loc_675838
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
loc_675838:
        lea     ecx, [esp + 0x50]
        call    FUN_0040de20
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x90
        ret
    }
}
