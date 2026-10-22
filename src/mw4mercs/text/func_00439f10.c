/*
 * FUN_00439f10 (336 B) — MLR light/material render helper (__thiscall).
 * Copies a light/material array, reallocating the destination buffer as
 * needed, then dispatches through the object's vtable (+0xac).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_0043e550(void);
extern void *FUN_004084d0(unsigned int);
extern void FUN_004084e0(void *);

__declspec(naked) void FUN_00439f10(void)
{
    __asm {
        sub     esp, 0x10
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x20]
        mov     ebx, ecx
        push    esi
        mov     dword ptr [esp + 0x18], ebx
        call    FUN_0043e550
        mov     eax, dword ptr [esi + 0xc]
        xor     ebp, ebp
        cmp     eax, ebp
        jz      L_a02d
        cmp     dword ptr [eax + 0x2c], ebp
        jbe     L_a02d
        mov     eax, dword ptr [esi]
        push    edi
        lea     ecx, [esp + 0x24]
        push    ecx
        lea     edx, [esp + 0x14]
        push    edx
        mov     ecx, esi
        call    dword ptr [eax + 0xb0]
        mov     esi, dword ptr [ebx + 0xc]
        mov     eax, dword ptr [esp + 0x24]
        mov     edi, dword ptr [esi + 0x2c]
        cmp     eax, edi
        mov     dword ptr [esp + 0x14], eax
        jz      L_9ff4
        cmp     eax, ebp
        jbe     L_9fda
        mov     ebx, eax
        lea     eax, [eax + eax*0x2]
        shl     eax, 0x2
        push    eax
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, ebp
        jz      L_9f87
        dec     ebx
        mov     dword ptr [esp + 0x1c], ebx
        mov     ebp, eax
L_9f87:
        mov     ebx, dword ptr [esi + 0x28]
        test    ebx, ebx
        jz      L_9fd1
        mov     edx, dword ptr [esp + 0x14]
        cmp     edx, edi
        jc      L_9f98
        mov     edx, edi
L_9f98:
        mov     ecx, edx
        dec     edx
        test    ecx, ecx
        jz      L_9fc8
        lea     ecx, [edx + edx*0x2]
        shl     ecx, 0x2
        lea     eax, [ecx + ebx*0x1]
        lea     ecx, [ecx + ebp*0x1 + 0x8]
        inc     edx
L_9fad:
        mov     edi, dword ptr [eax]
        mov     dword ptr [ecx + -0x8], edi
        mov     edi, dword ptr [eax + 0x4]
        mov     dword ptr [ecx + -0x4], edi
        mov     edi, dword ptr [eax + 0x8]
        mov     dword ptr [ecx], edi
        dec     edx
        sub     eax, 0xc
        sub     ecx, 0xc
        test    edx, edx
        ja      L_9fad
L_9fc8:
        push    ebx
        call    FUN_004084e0
        add     esp, 0x4
L_9fd1:
        mov     ebx, dword ptr [esp + 0x18]
        mov     dword ptr [esi + 0x28], ebp
        jmp     L_9fe9
L_9fda:
        mov     edx, dword ptr [esi + 0x28]
        push    edx
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [esi + 0x28], ebp
L_9fe9:
        mov     eax, dword ptr [esp + 0x14]
        mov     dword ptr [esi + 0x2c], eax
        mov     eax, dword ptr [esp + 0x24]
L_9ff4:
        mov     edx, dword ptr [esi + 0x28]
        mov     esi, dword ptr [esp + 0x10]
        lea     ecx, [eax + eax*0x2]
        shl     ecx, 0x2
        mov     eax, ecx
        shr     ecx, 0x2
        mov     edi, edx
        rep movsd
        mov     ecx, eax
        mov     eax, dword ptr [ebx]
        and     ecx, 0x3
        rep movsb
        mov     ecx, dword ptr [esp + 0x24]
        push    ecx
        push    edx
        mov     ecx, ebx
        call    dword ptr [eax + 0xac]
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 0x1
        pop     ebx
        add     esp, 0x10
        ret     0x4
L_a02d:
        mov     edx, dword ptr [esi]
        lea     eax, [esp + 0x20]
        push    eax
        lea     ecx, [esp + 0x10]
        push    ecx
        mov     ecx, esi
        call    dword ptr [edx + 0xb0]
        mov     eax, dword ptr [esp + 0x20]
        mov     ecx, dword ptr [esp + 0xc]
        mov     edx, dword ptr [ebx]
        push    eax
        push    ecx
        mov     ecx, ebx
        call    dword ptr [edx + 0xac]
        pop     esi
        pop     ebp
        mov     al, 0x1
        pop     ebx
        add     esp, 0x10
        ret     0x4
    }
}
