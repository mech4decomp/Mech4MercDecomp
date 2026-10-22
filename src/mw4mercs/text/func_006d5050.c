/*
 * FUN_006d5050 (384 B) — __thiscall (ECX = this), RET 0xC (3 stack params).
 * Allocates a 0x3C-byte object, initializes it, grows a pointer array in
 * this+0x114/0x11c/0x120, stores the object, and calls several helpers.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(int size);
extern void  __cdecl FUN_004084e0(void *p);
extern int   __stdcall FUN_006e0de0(int a);
extern void  __cdecl FUN_006d3160(int a);
extern void  __cdecl FUN_006d5a10(void);
extern void  __cdecl FUN_006d57e0(void);

extern int g_0084004c;

__declspec(naked) void __stdcall FUN_006d5050(void)
{
    __asm {
        push    ebx
        push    ebp
        push    esi
        push    edi
        push    0x3c
        mov     esi, ecx
        call    FUN_004084d0
        xor     ebp, ebp
        add     esp, 0x4
        cmp     eax, ebp
        jz      L1
        mov     dword ptr [eax + 0x4], ebp
        mov     dword ptr [eax + 0xc], ebp
        mov     dword ptr [eax + 0x8], ebp
        mov     dword ptr [eax + 0x14], ebp
        mov     dword ptr [eax + 0x10], ebp
        mov     dword ptr [eax + 0x1c], ebp
        mov     dword ptr [eax + 0x24], ebp
        mov     dword ptr [eax + 0x30], ebp
        mov     byte ptr [eax], 0x0
        mov     byte ptr [eax + 0x1], 0x0
        mov     edi, eax
        jmp     L2
L1:
        xor     edi, edi
L2:
        mov     ecx, dword ptr [esp + 0x1c]
        mov     ebx, dword ptr [esp + 0x14]
        mov     eax, dword ptr [esp + 0x18]
        and     ecx, 0xffff
        and     eax, 0xffff
        mov     dword ptr [edi + 0xc], ecx
        mov     ecx, dword ptr [esi + 0x10]
        push    ebx
        mov     dword ptr [edi + 0x4], ebx
        mov     dword ptr [edi + 0x8], eax
        call    FUN_006e0de0
        mov     ecx, dword ptr [esi + 0x118]
        mov     dword ptr [edi + 0x18], eax
        mov     eax, dword ptr [esi + 0x114]
        cmp     ecx, eax
        mov     dword ptr [esp + 0x1c], ecx
        jl      L3
        lea     ebp, [eax + 0x64]
        cmp     ebp, dword ptr [esi + 0x120]
        mov     dword ptr [esi + 0x114], ebp
        jz      L4
        test    ebp, ebp
        jbe     L5
        lea     edx, [ebp*4 + 0x0]
        push    edx
        call    FUN_004084d0
        mov     edx, dword ptr [esi + 0x11c]
        add     esp, 0x4
        test    edx, edx
        mov     ebx, eax
        mov     dword ptr [esp + 0x18], ebx
        jz      L6
        mov     ecx, dword ptr [esi + 0x120]
        cmp     ebp, ecx
        jnc     L7
        mov     ecx, ebp
L7:
        mov     eax, ecx
        dec     ecx
        test    eax, eax
        jz      L8
        lea     eax, [ebx + ecx*4]
        sub     edx, ebx
        inc     ecx
L9:
        mov     ebx, dword ptr [edx + eax*1]
        mov     dword ptr [eax], ebx
        dec     ecx
        sub     eax, 0x4
        test    ecx, ecx
        ja      L9
        mov     ebx, dword ptr [esp + 0x18]
L8:
        mov     eax, dword ptr [esi + 0x11c]
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L6:
        mov     dword ptr [esi + 0x11c], ebx
        mov     ebx, dword ptr [esp + 0x14]
        jmp     L10
L5:
        mov     ecx, dword ptr [esi + 0x11c]
        push    ecx
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [esi + 0x11c], 0x0
L10:
        mov     ecx, dword ptr [esp + 0x1c]
        mov     dword ptr [esi + 0x120], ebp
L4:
        xor     ebp, ebp
L3:
        mov     eax, dword ptr [esi + 0x11c]
        lea     edx, [ecx + 0x1]
        mov     dword ptr [eax + ecx*4], edi
        mov     ecx, dword ptr [ebx + 0x24]
        push    ecx
        mov     ecx, dword ptr [g_0084004c]
        mov     dword ptr [esi + 0x118], edx
        call    FUN_006d3160
        mov     eax, dword ptr [ebx + 0x28]
        cmp     eax, ebp
        jz      L11
        mov     ecx, dword ptr [g_0084004c]
        push    eax
        call    FUN_006d3160
L11:
        mov     ebx, dword ptr [ebx + 0x2c]
        cmp     ebx, ebp
        jz      L12
        mov     ecx, dword ptr [g_0084004c]
        push    ebx
        call    FUN_006d3160
L12:
        mov     ecx, esi
        call    FUN_006d5a10
        mov     ecx, esi
        call    FUN_006d57e0
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0xc
    }
}
