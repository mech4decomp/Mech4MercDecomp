/*
 * FUN_004C3070 (570 B) — MLR camera-element constructor (thiscall, RET 0xc).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_004c42f0(void *this);
extern void FUN_0041fc80(void *this);
extern void FUN_004c3590(void *this);
extern void FUN_004c39d0(void *this);
extern void FUN_004c46b0(void *this);
extern void FUN_006f4950(void);
extern void FUN_004084d0(void);
extern void FUN_004883e0(void *this);
extern void FUN_006f49a0(void);
extern void FUN_0048bde0(void *this);
extern void FUN_00416110(void *this);
extern void FUN_004b83e0(void *this);
extern void FUN_004c3e50(void *this);

extern int g_7daaf4;
extern int g_7b95a0;
extern int g_7da848;
extern int g_7b959c;
extern int g_7daa38;

__declspec(naked) void __fastcall FUN_004c3070(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0xc]
        sub     esp, 0x10
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x20]
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x24]
        push    eax
        push    ebp
        mov     esi, ecx
        mov     ecx, dword ptr [g_7daaf4]
        push    edi
        push    ecx
        mov     ecx, esi
        call    FUN_004c42f0
        lea     ebx, [esi + 0x274]
        push    0x0
        mov     ecx, ebx
        call    FUN_0041fc80
        mov     dword ptr [ebx], 0x7716ac
        lea     ebx, [esi + 0x27c]
        push    0x0
        mov     ecx, ebx
        call    FUN_0041fc80
        mov     eax, 0xbf800000
        mov     dword ptr [ebx], 0x7716ac
        mov     dword ptr [esi + 0x2d8], eax
        mov     ecx, esi
        mov     dword ptr [esi + 0x2e0], eax
        mov     dword ptr [esi + 0x2dc], eax
        mov     dword ptr [esi + 0x2e4], eax
        mov     dword ptr [esi], 0x771668
        mov     dword ptr [esi + 0x18], 0x84
        call    FUN_004c3590
        mov     ecx, esi
        call    FUN_004c39d0
        mov     ecx, esi
        call    FUN_004c46b0
        mov     edx, dword ptr [g_7b95a0]
        push    edx
        call    FUN_006f4950
        push    0xe4
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      l_alloc1_fail
        mov     ecx, dword ptr [g_7da848]
        push    ecx
        mov     ecx, eax
        call    FUN_004883e0
        mov     ebx, eax
        jmp     l_alloc1_done
    l_alloc1_fail:
        xor     ebx, ebx
    l_alloc1_done:
        mov     dword ptr [esi + 0x270], ebx
        call    FUN_006f49a0
        mov     edx, dword ptr [g_7b959c]
        push    edx
        call    FUN_006f4950
        push    0x164
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      l_alloc2_fail
        push    ebx
        push    0x0
        mov     ecx, eax
        call    FUN_0048bde0
        jmp     l_alloc2_done
    l_alloc2_fail:
        xor     eax, eax
    l_alloc2_done:
        mov     dword ptr [esi + 0x26c], eax
        call    FUN_006f49a0
        mov     ecx, dword ptr [g_7daa38]
        call    FUN_00416110
        test    eax, eax
        jz      l_alloc3_fail
        push    ebp
        push    edi
        mov     ecx, eax
        call    FUN_004b83e0
        jmp     l_alloc3_done
    l_alloc3_fail:
        xor     eax, eax
    l_alloc3_done:
        push    0x4
        mov     dword ptr [esi + 0x2c4], eax
        mov     eax, dword ptr [edi]
        lea     ebx, [esi + 0x20c]
        push    ebx
        mov     ecx, edi
        call    dword ptr [eax + 0x20]
        mov     edx, dword ptr [eax]
        push    0x4
        lea     ebp, [esi + 0x210]
        push    ebp
        mov     ecx, eax
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [eax]
        lea     ecx, [esi + 0x214]
        push    0x4
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [eax]
        lea     ecx, [esi + 0x218]
        push    0x4
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [edi]
        lea     eax, [esi + 0x21c]
        push    0x4
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [eax]
        lea     ecx, [esi + 0x220]
        push    0x4
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0x20]
        mov     eax, dword ptr [esi + 0x218]
        mov     ecx, dword ptr [esi + 0x214]
        mov     edx, dword ptr [ebp]
        push    eax
        mov     eax, dword ptr [ebx]
        push    ecx
        mov     ecx, dword ptr [esi + 0x220]
        push    edx
        mov     edx, dword ptr [esi + 0x21c]
        push    eax
        push    ecx
        push    edx
        mov     ecx, esi
        call    FUN_004c3e50
        mov     eax, dword ptr [edi]
        push    0x1
        lea     ecx, [esi + 0x268]
        push    ecx
        mov     ecx, edi
        call    dword ptr [eax + 0x20]
        mov     edx, dword ptr [eax]
        push    0x1
        lea     ecx, [esi + 0x269]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0x20]
        cmp     dword ptr [esp + 0x28], 0x5
        jge     l_skip_bf
        mov     edx, dword ptr [edi]
        push    0x10
        lea     eax, [esp + 0x14]
        push    eax
        mov     ecx, edi
        mov     dword ptr [esp + 0x20], 0xbf800000
        mov     dword ptr [esp + 0x1c], 0xbf800000
        mov     dword ptr [esp + 0x18], 0xbf800000
        mov     dword ptr [esp + 0x24], 0xbf800000
        call    dword ptr [edx + 0x20]
    l_skip_bf:
        xor     eax, eax
        mov     ecx, 0x3f800000
        pop     edi
        mov     dword ptr [esi + 0x2c8], eax
        mov     dword ptr [esi + 0x2cc], eax
        mov     dword ptr [esi + 0x264], eax
        mov     dword ptr [esi + 0x2d0], ecx
        mov     dword ptr [esi + 0x2d4], ecx
        mov     byte ptr [esi + 0x26a], 0x1
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x10
        ret     0xc
    }
}
