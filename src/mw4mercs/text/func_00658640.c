/*
 * FUN_00658640 (449 B) — __thiscall (ECX = this), RET 8 (2 stack params).
 *
 * Vector-like container resize/insert logic with several growth paths.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00658f80(void);
extern void __cdecl FUN_00659920(void);
extern void __cdecl FUN_006598f0(void);
extern void __cdecl FUN_00658810(void);
extern void __cdecl FUN_00659620(void);
extern void __cdecl FUN_00659aa0(void);
extern void __cdecl FUN_006594d0(void);
extern void __cdecl FUN_006594e0(void);
extern void __cdecl FUN_00658830(void);
extern void __cdecl FUN_00658820(void);

__declspec(naked) void __stdcall FUN_00658640(void *param1, void *param2)
{
    __asm {
        sub     esp, 0x10
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        mov     ebx, dword ptr [esi]
        mov     ecx, dword ptr [esi + 0x8]
        sub     ecx, ebx
        mov     eax, 0x2aaaaaab
        imul    ecx
        sar     edx, 0x1
        mov     eax, edx
        shr     eax, 0x1f
        push    edi
        mov     edi, dword ptr [esp + 0x24]
        add     edx, eax
        cmp     edi, edx
        mov     dword ptr [esp + 0x10], esi
        jbe     L2
        mov     cl, byte ptr [esi + 0x8]
        lea     edx, [esp + 0x24]
        push    edx
        mov     byte ptr [esp + 0x28], cl
        push    edi
        lea     ecx, [esp + 0x1c]
        call    FUN_00658f80
        test    edi, edi
        mov     ebp, dword ptr [esp + 0x14]
        jbe     L1
L3:
        mov     eax, dword ptr [esp + 0x28]
        push    eax
        push    ebp
        call    FUN_00659920
        add     esp, 0x8
        add     ebp, 0xc
        dec     edi
        jnz     L3
L1:
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [esp + 0x1c]
        mov     dword ptr [esi], eax
        mov     eax, dword ptr [esi + 0x4]
        cmp     ebx, eax
        mov     dword ptr [esi + 0x4], ebp
        mov     edx, dword ptr [esi + 0x8]
        mov     dword ptr [esi + 0x8], ecx
        mov     dword ptr [esp + 0x14], ebx
        mov     dword ptr [esp + 0x18], eax
        mov     dword ptr [esp + 0x1c], edx
        mov     edi, eax
        mov     esi, ebx
        jz      L4
L5:
        push    0x0
        mov     ecx, esi
        call    FUN_006598f0
        add     esi, 0xc
        cmp     esi, edi
        jnz     L5
L4:
        lea     ecx, [esp + 0x14]
        call    FUN_00658810
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x10
        ret     0x8
L2:
        mov     ebp, dword ptr [esi + 0x4]
        mov     ecx, ebp
        sub     ecx, ebx
        mov     eax, 0x2aaaaaab
        imul    ecx
        sar     edx, 0x1
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        cmp     edi, edx
        mov     dword ptr [esp + 0x24], edx
        jbe     L8
        cmp     ebx, ebp
        jz      L6
L7:
        mov     ecx, dword ptr [esp + 0x28]
        push    ecx
        mov     ecx, ebx
        call    FUN_00659620
        add     ebx, 0xc
        cmp     ebx, ebp
        jnz     L7
        mov     edx, dword ptr [esp + 0x24]
L6:
        sub     edi, edx
        jz      L9
L10:
        test    ebp, ebp
        jz      L11
        mov     edx, dword ptr [esp + 0x28]
        push    edx
        mov     ecx, ebp
        call    FUN_00659aa0
L11:
        add     ebp, 0xc
        dec     edi
        jnz     L10
L9:
        pop     edi
        mov     dword ptr [esi + 0x4], ebp
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x10
        ret     0x8
L8:
        test    edi, edi
        jbe     L12
L13:
        mov     eax, dword ptr [esp + 0x28]
        push    eax
        mov     ecx, ebx
        call    FUN_00659620
        add     ebx, 0xc
        dec     edi
        jnz     L13
L12:
        mov     ecx, ebp
        sub     ecx, ebp
        mov     eax, 0x2aaaaaab
        imul    ecx
        sar     edx, 0x1
        mov     ecx, edx
        shr     ecx, 0x1f
        add     edx, ecx
        test    edx, edx
        mov     dword ptr [esp + 0x28], ebx
        jle     L14
        mov     edi, ebp
        sub     edi, ebx
        mov     dword ptr [esp + 0x28], edx
L15:
        lea     edx, [edi + ebx]
        push    edx
        mov     ecx, ebx
        call    FUN_00659620
        mov     eax, dword ptr [esp + 0x28]
        add     ebx, 0xc
        dec     eax
        mov     dword ptr [esp + 0x28], eax
        jnz     L15
        mov     dword ptr [esp + 0x28], ebx
L14:
        cmp     ebx, ebp
        jz      L16
L17:
        mov     esi, dword ptr [ebx]
        push    esi
        lea     edi, [ebx + 0x8]
        call    FUN_006594d0
        push    eax
        mov     eax, dword ptr [edi - 0x4]
        push    eax
        push    esi
        call    FUN_006594e0
        mov     ecx, dword ptr [edi]
        sub     ecx, esi
        mov     eax, 0x66666667
        imul    ecx
        sar     edx, 0x4
        mov     ecx, edx
        shr     ecx, 0x1f
        add     esp, 0x10
        add     edx, ecx
        push    edx
        push    esi
        mov     ecx, edi
        call    FUN_00658830
        mov     ecx, edi
        call    FUN_00658820
        add     ebx, 0xc
        cmp     ebx, ebp
        jnz     L17
        mov     esi, dword ptr [esp + 0x10]
        mov     ebx, dword ptr [esp + 0x28]
L16:
        pop     edi
        mov     dword ptr [esi + 0x4], ebx
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x10
        ret     0x8
    }
}
