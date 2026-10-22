/*
 * FUN_006D4BC0 (769 B, 0x6D4BC0-0x6D4EBE) — __thiscall object initializer.
 * Registers several string members via FUN_00411CB0, allocates/resizes two
 * dword arrays (0x128/0x11c) with FUN_004084D0/FUN_004084E0, builds a
 * linked list of 0x3c-byte nodes, and calls FUN_006D3D30 per node.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_79eb80[];   /* 0x79eb80 - string */
extern char g_79eb70[];   /* 0x79eb70 - string */
extern char g_79eb64[];   /* 0x79eb64 - string */
extern char g_79eb5c[];   /* 0x79eb5c - string */
extern char g_79eb54[];   /* 0x79eb54 - string */
extern char g_79eb44[];   /* 0x79eb44 - string */
extern char g_79eb38[];   /* 0x79eb38 - string */
extern unsigned int g_7b8810;   /* 0x7b8810 - dword data */
extern char g_76cd64[];   /* 0x76cd64 - vtable */

extern void __cdecl FUN_0040ED60(void);
extern void __cdecl FUN_00411CB0(void);
extern void __cdecl FUN_0040DD50(void);
extern void __cdecl FUN_00412390(void);
extern void __cdecl FUN_004084D0(void);
extern void __cdecl FUN_004084E0(void);
extern void __cdecl FUN_004084C0(void);
extern void __cdecl FUN_006D3D30(void);
extern void __cdecl FUN_006D5240(void);
extern void __cdecl FUN_0040DE20(void);

__declspec(naked) void FUN_006D4BC0(void)
{
    __asm {
        sub     esp, 0x58
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x6c]
        push    offset g_79eb80
        call    FUN_0040ED60
        mov     edi, eax
        push    0
        lea     eax, [esp + 0x18]
        push    eax
        push    offset g_79eb70
        mov     ecx, edi
        call    FUN_00411CB0
        push    0
        lea     ebp, [esi + 4]
        push    ebp
        push    offset g_79eb64
        mov     ecx, edi
        call    FUN_00411CB0
        push    0
        lea     ebx, [esi + 8]
        push    ebx
        push    offset g_79eb5c
        mov     ecx, edi
        call    FUN_00411CB0
        push    0
        lea     eax, [esi + 0xc]
        push    eax
        push    offset g_79eb54
        mov     ecx, edi
        call    FUN_00411CB0
        push    0
        lea     eax, [esi + 0x118]
        push    eax
        push    offset g_79eb44
        mov     ecx, edi
        call    FUN_00411CB0
        push    0
        lea     ecx, [esp + 0x1c]
        call    FUN_0040DD50
        push    0
        lea     ecx, [esp + 0x1c]
        push    ecx
        push    offset g_79eb38
        mov     ecx, edi
        call    FUN_00412390
        mov     ecx, dword ptr [ebp]
        mov     ebp, dword ptr [esi + 0xc]
        imul    ebp, dword ptr [ebx]
        mov     edx, 1
        shl     edx, cl
        mov     ecx, dword ptr [esi + 0x118]
        mov     eax, 0x51eb851f
        mov     dword ptr [esi], edx
        imul    ecx
        sar     edx, 5
        mov     eax, edx
        shr     eax, 0x1f
        lea     edx, [edx + eax + 1]
        lea     eax, [edx + edx*4]
        lea     edi, [eax + eax*4]
        lea     ecx, [ebp*8 + 4]
        shl     edi, 2
        push    ecx
        mov     dword ptr [esp + 0x14], edi
        mov     dword ptr [esi + 0x114], edi
        call    FUN_004084D0
        xor     ebx, ebx
        add     esp, 4
        cmp     eax, ebx
        je      L_6D4CC7
        lea     ecx, [ebp - 1]
        cmp     ecx, ebx
        lea     edx, [eax + 4]
        mov     dword ptr [eax], ebp
        mov     eax, edx
        jl      L_6D4CC3
        inc     ecx
L_6D4CB8:
        mov     dword ptr [eax], ebx
        mov     dword ptr [eax + 4], ebx
        add     eax, 8
        dec     ecx
        jne     L_6D4CB8
L_6D4CC3:
        mov     eax, edx
        jmp     L_6D4CC9
L_6D4CC7:
        xor     eax, eax
L_6D4CC9:
        mov     dword ptr [esi + 0x124], eax
        cmp     ebp, dword ptr [esi + 0x12c]
        je      L_6D4D5D
        cmp     ebp, ebx
        jbe     L_6D4D42
        lea     edx, [ebp*4]
        push    edx
        call    FUN_004084D0
        mov     edx, dword ptr [esi + 0x128]
        add     esp, 4
        test    edx, edx
        mov     ebx, eax
        mov     dword ptr [esp + 0x6c], ebx
        je      L_6D4D38
        mov     ecx, dword ptr [esi + 0x12c]
        cmp     ebp, ecx
        jae     L_6D4D0B
        mov     ecx, ebp
L_6D4D0B:
        mov     eax, ecx
        dec     ecx
        test    eax, eax
        je      L_6D4D29
        lea     eax, [ebx + ecx*4]
        sub     edx, ebx
        inc     ecx
L_6D4D18:
        mov     ebx, dword ptr [edx + eax]
        mov     dword ptr [eax], ebx
        dec     ecx
        sub     eax, 4
        test    ecx, ecx
        ja      L_6D4D18
        mov     ebx, dword ptr [esp + 0x6c]
L_6D4D29:
        mov     eax, dword ptr [esi + 0x128]
        push    eax
        call    FUN_004084E0
        add     esp, 4
L_6D4D38:
        mov     dword ptr [esi + 0x128], ebx
        xor     ebx, ebx
        jmp     L_6D4D57
L_6D4D42:
        mov     ecx, dword ptr [esi + 0x128]
        push    ecx
        call    FUN_004084E0
        add     esp, 4
        mov     dword ptr [esi + 0x128], ebx
L_6D4D57:
        mov     dword ptr [esi + 0x12c], ebp
L_6D4D5D:
        cmp     ebp, ebx
        jle     L_6D4D71
        mov     edi, dword ptr [esi + 0x128]
        mov     ecx, ebp
        xor     eax, eax
        rep stosd
        mov     edi, dword ptr [esp + 0x10]
L_6D4D71:
        mov     ebx, dword ptr [esi + 0x120]
        cmp     edi, ebx
        je      L_6D4DF4
        test    edi, edi
        jbe     L_6D4DD5
        lea     edx, [edi*4]
        push    edx
        call    FUN_004084D0
        mov     edx, dword ptr [esi + 0x11c]
        add     esp, 4
        test    edx, edx
        mov     ebp, eax
        je      L_6D4DCD
        cmp     edi, ebx
        mov     ecx, edi
        jb      L_6D4DA3
        mov     ecx, ebx
L_6D4DA3:
        mov     eax, ecx
        dec     ecx
        test    eax, eax
        je      L_6D4DBE
        lea     eax, [ebp + ecx*4]
        sub     edx, ebp
        inc     ecx
L_6D4DB1:
        mov     ebx, dword ptr [edx + eax]
        mov     dword ptr [eax], ebx
        dec     ecx
        sub     eax, 4
        test    ecx, ecx
        ja      L_6D4DB1
L_6D4DBE:
        mov     eax, dword ptr [esi + 0x11c]
        push    eax
        call    FUN_004084E0
        add     esp, 4
L_6D4DCD:
        mov     dword ptr [esi + 0x11c], ebp
        jmp     L_6D4DEE
L_6D4DD5:
        mov     ecx, dword ptr [esi + 0x11c]
        push    ecx
        call    FUN_004084E0
        add     esp, 4
        mov     dword ptr [esi + 0x11c], 0
L_6D4DEE:
        mov     dword ptr [esi + 0x120], edi
L_6D4DF4:
        mov     edx, dword ptr [g_7b8810]
        push    edx
        push    0xc
        call    FUN_004084C0
        xor     ebx, ebx
        add     esp, 8
        cmp     eax, ebx
        je      L_6D4E27
        lea     ecx, [esp + 0x5c]
        mov     dword ptr [eax + 4], ecx
        mov     edx, dword ptr [esp + 0x5c]
        mov     ecx, eax
        mov     dword ptr [eax + 8], edx
        mov     dword ptr [eax], offset g_76cd64
        mov     dword ptr [esp + 0x6c], ecx
        jmp     L_6D4E2F
L_6D4E27:
        mov     dword ptr [esp + 0x6c], ebx
L_6D4E2B:
        mov     ecx, dword ptr [esp + 0x6c]
L_6D4E2F:
        mov     eax, dword ptr [ecx + 8]
        test    eax, eax
        je      L_6D4E90
        mov     ebp, dword ptr [eax]
        test    ebp, ebp
        mov     eax, dword ptr [eax + 4]
        mov     dword ptr [ecx + 8], eax
        je      L_6D4E90
        push    0x3c
        call    FUN_004084D0
        xor     ecx, ecx
        add     esp, 4
        cmp     eax, ecx
        je      L_6D4E71
        mov     dword ptr [eax + 4], ecx
        mov     dword ptr [eax + 0xc], ecx
        mov     dword ptr [eax + 8], ecx
        mov     dword ptr [eax + 0x14], ecx
        mov     dword ptr [eax + 0x10], ecx
        mov     dword ptr [eax + 0x1c], ecx
        mov     dword ptr [eax + 0x24], ecx
        mov     dword ptr [eax + 0x30], ecx
        mov     byte ptr [eax], cl
        mov     byte ptr [eax + 1], cl
        jmp     L_6D4E73
L_6D4E71:
        xor     eax, eax
L_6D4E73:
        mov     ecx, dword ptr [esi + 0x11c]
        mov     dword ptr [ecx + ebx*4], eax
        mov     edx, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [esi + 0x10]
        push    edx
        push    ecx
        push    ebp
        mov     ecx, eax
        call    FUN_006D3D30
        inc     ebx
        jmp     L_6D4E2B
L_6D4E90:
        cmp     ebx, edi
        jge     L_6D4EA7
        mov     edx, dword ptr [esi + 0x11c]
        mov     ecx, edi
        lea     edx, [edx + ebx*4]
        sub     ecx, ebx
        xor     eax, eax
        mov     edi, edx
        rep stosd
L_6D4EA7:
        mov     ecx, esi
        call    FUN_006D5240
        lea     ecx, [esp + 0x18]
        call    FUN_0040DE20
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x58
        ret     4
    }
}
