/*
 * FUN_004C32D0 (325 B) — MLR camera-element constructor (thiscall, RET 0x4).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_004c43f0(void *this);
extern void FUN_0041fc80(void *this);
extern void FUN_004c3590(void *this);
extern void FUN_004c39d0(void *this);
extern void FUN_004c46b0(void *this);
extern void FUN_006f4950(void);
extern void FUN_004084d0(void);
extern void FUN_004883e0(void *this);
extern void FUN_006f49a0(void);
extern void FUN_0048bde0(void *this);

extern int g_7daaf4;
extern int g_7b95a0;
extern int g_7da848;
extern int g_7b959c;
extern float g_771618;

__declspec(naked) void __fastcall FUN_004c32d0(void)
{
    __asm {
        mov     eax, dword ptr [g_7daaf4]
        push    ebx
        push    esi
        push    edi
        mov     esi, ecx
        push    eax
        call    FUN_004c43f0
        lea     edi, [esi + 0x274]
        xor     ebx, ebx
        push    ebx
        mov     ecx, edi
        call    FUN_0041fc80
        mov     dword ptr [edi], 0x7716ac
        lea     edi, [esi + 0x27c]
        push    ebx
        mov     ecx, edi
        call    FUN_0041fc80
        mov     eax, 0xbf800000
        mov     dword ptr [edi], 0x7716ac
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
        fld     dword ptr [g_771618]
        mov     edx, dword ptr [g_7b95a0]
        mov     ecx, dword ptr [esp + 0x10]
        mov     al, 0x1
        fstp    dword ptr [esi + 0x224]
        push    edx
        mov     dword ptr [esi + 0x2c4], ecx
        mov     byte ptr [esi + 0x268], al
        mov     byte ptr [esi + 0x269], al
        mov     byte ptr [esi + 0x26a], al
        mov     byte ptr [esi + 0x2e8], bl
        call    FUN_006f4950
        push    0xe4
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, ebx
        jz      l_alloc1_fail
        mov     ecx, dword ptr [g_7da848]
        push    ecx
        mov     ecx, eax
        call    FUN_004883e0
        mov     edi, eax
        jmp     l_alloc1_done
    l_alloc1_fail:
        xor     edi, edi
    l_alloc1_done:
        mov     dword ptr [esi + 0x270], edi
        call    FUN_006f49a0
        mov     edx, dword ptr [g_7b959c]
        push    edx
        call    FUN_006f4950
        push    0x164
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, ebx
        jz      l_alloc2_fail
        push    edi
        push    ebx
        mov     ecx, eax
        call    FUN_0048bde0
        jmp     l_alloc2_done
    l_alloc2_fail:
        xor     eax, eax
    l_alloc2_done:
        mov     dword ptr [esi + 0x26c], eax
        call    FUN_006f49a0
        mov     eax, 0x3f800000
        mov     dword ptr [esi + 0x2d0], eax
        mov     dword ptr [esi + 0x2d4], eax
        pop     edi
        mov     dword ptr [esi + 0x2c8], ebx
        mov     dword ptr [esi + 0x2cc], ebx
        mov     dword ptr [esi + 0x264], ebx
        mov     eax, esi
        pop     esi
        pop     ebx
        ret     0x4
    }
}
