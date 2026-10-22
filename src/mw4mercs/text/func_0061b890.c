/*
 * FUN_0061b890 (430 B) — __thiscall (ECX = this), RET 4.
 *
 * Initializes a sub-object via FUN_0041de80, then if FUN_0061ba40
 * succeeds, walks a table of entries (0xff per row, 0x58 stride) and
 * initializes each entry's fields through a vtable object at this+0x30.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_0041de80(void *a, void *b);
extern char __stdcall FUN_0061ba40(void *a);
extern void __stdcall FUN_0041e110(void *a, int b);
extern void __stdcall FUN_0041edd0(void *a, int b, float c, int d);
extern void __stdcall FUN_0041eb40(void *a, int b);
extern void __stdcall FUN_0041ea60(void *a);
extern void __stdcall FUN_0041ea40(void);
extern void __stdcall FUN_0041dec0(void *a);
extern float g_78c634;

__declspec(naked) void __stdcall FUN_0061b890(void)
{
    __asm {
        sub     esp, 0x3c
        mov     eax, dword ptr [esp + 0x40]
        push    ebx
        push    esi
        push    edi
        mov     ebx, ecx
        push    0x0
        push    eax
        lea     ecx, [esp + 0x20]
        mov     dword ptr [esp + 0x1c], ebx
        call    FUN_0041de80
        lea     ecx, [esp + 0x18]
        push    ecx
        mov     ecx, ebx
        call    FUN_0061ba40
        test    al, al
        jz      L_ba2c
        lea     esi, [ebx + 0x5c04]
        push    0x4
        push    esi
        lea     ecx, [esp + 0x20]
        mov     dword ptr [esi], 0x0
        call    FUN_0041e110
        mov     eax, dword ptr [esi]
        mov     ecx, dword ptr [esp + 0x2c]
        mov     edi, dword ptr [ebx + 0x30]
        mov     edx, dword ptr [edi]
        push    eax
        push    ecx
        mov     ecx, edi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [edi]
        push    0x0
        mov     ecx, edi
        call    dword ptr [edx + 0xc]
        mov     eax, dword ptr [ebx + 0x20]
        test    eax, eax
        mov     dword ptr [edi + 0x8], 0xffffffec
        jle     L_ba2c
        push    ebp
        mov     dword ptr [esp + 0x50], 0x0
        mov     dword ptr [esp + 0x14], eax
    L_b912:
        lea     ebp, [ebx + 0x57e0]
        mov     dword ptr [esp + 0x10], 0xff
    L_b920:
        mov     eax, dword ptr [ebp]
        mov     ecx, dword ptr [esp + 0x50]
        lea     esi, [ecx + eax*0x1]
        cmp     dword ptr [esi], 0x1
        jnz     L_b9ff
        push    0xc
        push    0x3f800000
        push    0x0
        lea     edx, [esi + 0x8]
        push    edx
        mov     ecx, edi
        call    FUN_0041edd0
        push    0xc
        push    0x3f800000
        push    0x0
        lea     eax, [esi + 0x10]
        push    eax
        mov     ecx, edi
        call    FUN_0041edd0
        fld     dword ptr [g_78c634]
        mov     ecx, dword ptr [g_78c634]
        fchs
        push    0x8
        push    ecx
        push    ecx
        lea     edx, [esi + 0x14]
        fstp    dword ptr [esp]
        push    edx
        mov     ecx, edi
        call    FUN_0041edd0
        lea     eax, [esi + 0x18]
        push    0x20
        push    eax
        mov     ecx, edi
        mov     dword ptr [eax], 0x0
        call    FUN_0041eb40
        lea     eax, [esi + 0x1c]
        push    0x20
        push    eax
        mov     ecx, edi
        mov     dword ptr [eax], 0x0
        call    FUN_0041eb40
        lea     eax, [esi + 0x20]
        push    0x20
        push    eax
        mov     ecx, edi
        mov     dword ptr [eax], 0x0
        call    FUN_0041eb40
        lea     eax, [esi + 0x54]
        push    eax
        mov     ecx, edi
        call    FUN_0041ea60
        lea     ecx, [esi + 0x55]
        push    ecx
        mov     ecx, edi
        call    FUN_0041ea60
        lea     edx, [esi + 0x56]
        push    edx
        mov     ecx, edi
        call    FUN_0041ea60
        add     esi, 0x24
        mov     ebx, 0xc
    L_b9dd:
        push    0x4
        push    0x3f800000
        push    0x0
        push    esi
        mov     ecx, edi
        call    FUN_0041edd0
        add     esi, 0x4
        dec     ebx
        jnz     L_b9dd
        mov     ecx, edi
        call    FUN_0041ea40
        mov     ebx, dword ptr [esp + 0x18]
    L_b9ff:
        mov     eax, dword ptr [esp + 0x10]
        add     ebp, 0x4
        dec     eax
        mov     dword ptr [esp + 0x10], eax
        jnz     L_b920
        mov     ecx, dword ptr [esp + 0x50]
        mov     eax, dword ptr [esp + 0x14]
        add     ecx, 0x58
        dec     eax
        mov     dword ptr [esp + 0x50], ecx
        mov     dword ptr [esp + 0x14], eax
        jnz     L_b912
        pop     ebp
    L_ba2c:
        lea     ecx, [esp + 0x18]
        call    FUN_0041dec0
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x3c
        ret     4
    }
}
