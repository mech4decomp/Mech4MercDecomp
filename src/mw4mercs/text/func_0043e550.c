/*
 * FUN_0043e550 (287 B) — MLR mesh vertex-buffer resize/copy (__thiscall,
 * RET 0x4). Reallocates the vertex array via FUN_004084d0/e0 and copies
 * vertex data through the stream object's virtual methods (+0xa8/+0xa4).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void  FUN_00442230(void);
extern void *FUN_004084d0(void);
extern void  FUN_004084e0(void);

__declspec(naked) void FUN_0043e550(void)
{
    __asm {
        sub     esp, 0xc
        push    ebx
        push    esi
        mov     esi, dword ptr [esp + 0x18]
        mov     ebx, ecx
        push    esi
        mov     dword ptr [esp + 0x14], ebx
        call    FUN_00442230
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        jz      L_63d
        mov     ecx, dword ptr [eax + 0x24]
        test    ecx, ecx
        jbe     L_63d
        mov     eax, dword ptr [esi]
        push    edi
        lea     ecx, [esp + 0x1c]
        push    ecx
        lea     edx, [esp + 0x10]
        push    edx
        mov     ecx, esi
        call    dword ptr [eax + 0xa8]
        mov     esi, dword ptr [ebx + 0xc]
        mov     ecx, dword ptr [esp + 0x1c]
        mov     edi, dword ptr [esi + 0x24]
        cmp     ecx, edi
        mov     dword ptr [esp + 0x10], ecx
        jz      L_617
        test    ecx, ecx
        jbe     L_5f9
        lea     eax, [ecx*4]
        push    ebp
        push    eax
        call    FUN_004084d0
        mov     ebp, dword ptr [esi + 0x20]
        add     esp, 0x4
        test    ebp, ebp
        mov     ebx, eax
        jz      L_5ef
        mov     ecx, dword ptr [esp + 0x14]
        cmp     ecx, edi
        jc      L_5ca
        mov     ecx, edi
L_5ca:
        mov     edx, ecx
        dec     ecx
        test    edx, edx
        jz      L_5e6
        mov     edx, ebp
        lea     eax, [ebx + ecx*4]
        sub     edx, ebx
        inc     ecx
L_5d9:
        mov     edi, dword ptr [edx + eax]
        mov     dword ptr [eax], edi
        dec     ecx
        sub     eax, 0x4
        test    ecx, ecx
        ja      L_5d9
L_5e6:
        push    ebp
        call    FUN_004084e0
        add     esp, 0x4
L_5ef:
        mov     dword ptr [esi + 0x20], ebx
        mov     ebx, dword ptr [esp + 0x18]
        pop     ebp
        jmp     L_60c
L_5f9:
        mov     eax, dword ptr [esi + 0x20]
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [esi + 0x20], 0x0
L_60c:
        mov     ecx, dword ptr [esp + 0x10]
        mov     dword ptr [esi + 0x24], ecx
        mov     ecx, dword ptr [esp + 0x1c]
L_617:
        mov     eax, dword ptr [esi + 0x20]
        mov     esi, dword ptr [esp + 0xc]
        mov     edx, dword ptr [ebx]
        mov     edi, eax
        rep     movsd
        mov     ecx, dword ptr [esp + 0x1c]
        push    ecx
        push    eax
        mov     ecx, ebx
        call    dword ptr [edx + 0xa4]
        pop     edi
        pop     esi
        mov     al, 0x1
        pop     ebx
        add     esp, 0xc
        ret     0x4
L_63d:
        mov     edx, dword ptr [esi]
        lea     eax, [esp + 0x18]
        push    eax
        lea     ecx, [esp + 0xc]
        push    ecx
        mov     ecx, esi
        call    dword ptr [edx + 0xa8]
        mov     eax, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [esp + 0x8]
        mov     edx, dword ptr [ebx]
        push    eax
        push    ecx
        mov     ecx, ebx
        call    dword ptr [edx + 0xa4]
        pop     esi
        mov     al, 0x1
        pop     ebx
        add     esp, 0xc
        ret     0x4
    }
}
