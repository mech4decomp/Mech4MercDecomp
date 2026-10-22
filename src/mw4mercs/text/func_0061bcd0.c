/*
 * FUN_0061bcd0 (607 B) — __thiscall. Processes a per-slot table
 * (0x58-byte stride) via a vtable-driven object (EBP+0x30), filling
 * float/byte fields through FUN_0041edd0/eb40/ea60/ea40.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_78c634;    /* 0x0078c634 (used as int and float) */

extern void __cdecl FUN_0061ba40(void);
extern void __cdecl FUN_0041edd0(void);
extern void __cdecl FUN_0041eb40(void);
extern void __cdecl FUN_0041ea60(void);
extern void __cdecl FUN_0041ea40(void);

__declspec(naked) void __stdcall FUN_0061bcd0(void)
{
    __asm {
        sub     esp, 0xc
        push    ebx
        push    ebp
        mov     ebp, ecx
        mov     eax, dword ptr [ebp + 0x34]
        mov     ecx, dword ptr [eax + 0x18]
        sub     ecx, dword ptr [eax + 0x10]
        push    esi
        push    edi
        jnz     L_bcfa
        mov     edx, dword ptr [esp + 0x20]
        push    edx
        mov     ecx, ebp
        call    FUN_0061ba40
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xc
        ret     0x4
L_bcfa:
        mov     esi, dword ptr [ebp + 0x30]
        mov     ecx, dword ptr [esi + 0x18]
        mov     edi, dword ptr [esi + 0x10]
        mov     eax, dword ptr [esi]
        sub     ecx, edi
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0xc]
        mov     ecx, dword ptr [esp + 0x20]
        mov     eax, dword ptr [ecx + 0x10]
        mov     edx, dword ptr [ecx + 0x18]
        mov     edi, dword ptr [esi]
        sub     edx, eax
        mov     eax, dword ptr [ecx]
        push    edx
        call    dword ptr [eax + 0x4]
        push    eax
        mov     ecx, esi
        call    dword ptr [edi + 0x24]
        mov     edi, dword ptr [ebp + 0x5c00]
        mov     edx, dword ptr [esi]
        push    edi
        mov     ecx, esi
        call    dword ptr [edx + 0xc]
        test    edi, edi
        jnz     L_bd65
        mov     eax, dword ptr [esi]
        lea     edi, [ebp + 0x5c04]
        mov     ecx, esi
        mov     dword ptr [edi], 0x0
        call    dword ptr [eax + 0x8]
        cmp     eax, 0x4
        jbe     L_bd5b
        mov     edx, dword ptr [esi]
        push    0x4
        push    edi
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
L_bd5b:
        mov     dword ptr [ebp + 0x5c00], 0x4
L_bd65:
        mov     esi, dword ptr [ebp + 0x5bf8]
        cmp     esi, dword ptr [ebp + 0x20]
        mov     dword ptr [esp + 0x10], esi
        jge     L_bf25
        lea     eax, [esi + esi*4]
        lea     eax, [esi + eax*2]
        shl     eax, 0x3
        mov     dword ptr [esp + 0x14], eax
L_bd85:
        mov     ebx, dword ptr [ebp + 0x5bfc]
        cmp     ebx, 0xff
        mov     dword ptr [esp + 0x18], ebx
        jge     L_bebe
        mov     edi, dword ptr [ebp + 0x30]
        lea     ecx, [ebp + ebx*4 + 0x57e0]
        mov     dword ptr [esp + 0x20], ecx
L_bda9:
        mov     edx, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [edx + 0x8]
        cmp     eax, 0x17
        jc      L_bef0
        mov     eax, dword ptr [esp + 0x20]
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [esp + 0x14]
        mov     eax, dword ptr [edx + ecx*1]
        cmp     eax, 0x1
        lea     esi, [edx + ecx*1]
        jnz     L_be9e
        push    0xc
        push    0x3f800000
        push    0x0
        lea     eax, [esi + 0x8]
        push    eax
        mov     ecx, edi
        call    FUN_0041edd0
        push    0xc
        push    0x3f800000
        push    0x0
        lea     ecx, [esi + 0x10]
        push    ecx
        mov     ecx, edi
        call    FUN_0041edd0
        fld     dword ptr [g_78c634]
        mov     edx, dword ptr [g_78c634]
        fchs
        push    0x8
        push    edx
        push    ecx
        lea     eax, [esi + 0x14]
        fstp    dword ptr [esp]
        push    eax
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
        lea     ecx, [esi + 0x54]
        push    ecx
        mov     ecx, edi
        call    FUN_0041ea60
        lea     edx, [esi + 0x55]
        push    edx
        mov     ecx, edi
        call    FUN_0041ea60
        lea     eax, [esi + 0x56]
        push    eax
        mov     ecx, edi
        call    FUN_0041ea60
        add     esi, 0x24
        mov     ebx, 0xc
L_be7c:
        push    0x4
        push    0x3f800000
        push    0x0
        push    esi
        mov     ecx, edi
        call    FUN_0041edd0
        add     esi, 0x4
        dec     ebx
        jnz     L_be7c
        mov     ecx, edi
        call    FUN_0041ea40
        mov     ebx, dword ptr [esp + 0x18]
L_be9e:
        mov     ecx, dword ptr [esp + 0x20]
        mov     esi, dword ptr [esp + 0x10]
        inc     ebx
        add     ecx, 0x4
        cmp     ebx, 0xff
        mov     dword ptr [esp + 0x18], ebx
        mov     dword ptr [esp + 0x20], ecx
        jl      L_bda9
L_bebe:
        mov     ecx, dword ptr [esp + 0x14]
        mov     eax, dword ptr [ebp + 0x20]
        mov     dword ptr [ebp + 0x24], esi
        inc     esi
        add     ecx, 0x58
        cmp     esi, eax
        mov     dword ptr [ebp + 0x5bfc], 0x0
        mov     dword ptr [esp + 0x10], esi
        mov     dword ptr [esp + 0x14], ecx
        jl      L_bd85
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xc
        ret     0x4
L_bef0:
        mov     eax, dword ptr [ebp + 0x30]
        mov     edx, dword ptr [eax + 0x10]
        mov     ecx, dword ptr [eax + 0x14]
        sub     ecx, edx
        mov     edx, dword ptr [eax + 0x18]
        mov     dword ptr [ebp + 0x5c00], ecx
        mov     ecx, dword ptr [eax + 0x10]
        mov     eax, dword ptr [ebp + 0x5c04]
        sub     edx, ecx
        cmp     eax, edx
        mov     dword ptr [ebp + 0x5bf8], esi
        mov     dword ptr [ebp + 0x5bfc], ebx
        jnz     L_bf25
        mov     eax, dword ptr [ebp + 0x20]
        mov     dword ptr [ebp + 0x24], eax
L_bf25:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xc
        ret     0x4
    }
}
