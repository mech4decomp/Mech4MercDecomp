/*
 * FUN_004C3A10 (796 B) — MLR camera-element render/update (thiscall, RET 0x4).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_0048c410(void *this);
extern void FUN_004919e0(void);
extern void FUN_00491a30(void);
extern void FUN_004c4210(void *this);
extern void FUN_0041fd80(void *this);
extern void FUN_00428cf0(void);

extern int g_7dab08;
extern int g_7dab0c;
extern int g_7dab10;
extern int g_7dab14;
extern int g_8bd548;
extern int g_8bd54c;
extern int g_8bd550;
extern int g_8bd554;
extern char g_7daaf8;
extern int g_7da930;
extern int g_7da934;
extern int g_7da938;
extern int g_7b9648;

__declspec(naked) void __fastcall FUN_004c3a10(void)
{
    __asm {
        sub     esp, 0x38
        push    ebp
        mov     ebp, ecx
        mov     al, byte ptr [ebp + 0x2e8]
        test    al, al
        mov     byte ptr [esp + 0x7], 0x0
        jz      l_use_default

        mov     eax, dword ptr [ebp + 0x2d8]
        mov     ecx, dword ptr [ebp + 0x2dc]
        mov     edx, dword ptr [ebp + 0x2e0]
        mov     dword ptr [g_7dab08], eax
        mov     eax, dword ptr [ebp + 0x2e4]
        mov     dword ptr [g_7dab0c], ecx
        mov     dword ptr [g_7dab10], edx
        mov     dword ptr [g_7dab14], eax
        jmp     l_after_clear

    l_use_default:
        mov     ecx, dword ptr [g_8bd548]
        mov     edx, dword ptr [g_8bd54c]
        mov     eax, dword ptr [g_8bd550]
        mov     dword ptr [g_7dab08], ecx
        mov     ecx, dword ptr [g_8bd554]
        mov     dword ptr [g_7dab0c], edx
        mov     dword ptr [g_7dab10], eax
        mov     dword ptr [g_7dab14], ecx

    l_after_clear:
        mov     al, byte ptr [ebp + 0x268]
        test    al, al
        mov     dword ptr [ebp + 0x264], 0x0
        jz      l_268_zero

        mov     al, byte ptr [ebp + 0x269]
        push    0x0
        push    0x0
        push    0x3f800000
        test    al, al
        mov     dword ptr [esp + 0x14], 0x3f800000
        lea     eax, [ebp + 0x80]
        push    0x3f800000
        jz      l_269_zero

        mov     ecx, dword ptr [ebp + 0x2c4]
        lea     edx, [esp + 0x18]
        push    edx
        push    ecx
        mov     ecx, dword ptr [ebp + 0x26c]
        push    0x7daa28
        push    0x8bd558
        lea     edx, [ebp + 0x284]
        push    edx
        push    eax
        call    FUN_0048c410
        jmp     l_after_48c410

    l_269_zero:
        mov     edx, dword ptr [ebp + 0x2c4]
        lea     ecx, [esp + 0x18]
        push    ecx
        push    edx
        push    0x0
    l_common_call:
        push    0x8bd558
        lea     ecx, [ebp + 0x284]
        push    ecx
        mov     ecx, dword ptr [ebp + 0x26c]
        push    eax
        call    FUN_0048c410
        jmp     l_after_48c410

    l_268_zero:
        mov     al, byte ptr [ebp + 0x269]
        mov     edx, dword ptr [ebp + 0x2c4]
        push    0x0
        push    0x0
        push    0x3f800000
        push    0x3f800000
        push    0x0
        test    al, al
        lea     eax, [ebp + 0x80]
        push    edx
        jz      l_269_zero2
        push    0x7daa28
        jmp     l_common_call
    l_269_zero2:
        push    0x0
        push    0x8bd558
        lea     ecx, [ebp + 0x284]
        push    ecx
        mov     ecx, dword ptr [ebp + 0x26c]
        push    eax
        call    FUN_0048c410
        mov     byte ptr [esp + 0x7], 0x1

    l_after_48c410:
        mov     edx, dword ptr [ebp + 0x2d0]
        mov     eax, dword ptr [ebp + 0x2d4]
        mov     ecx, dword ptr [ebp + 0x2c8]
        push    edx
        mov     edx, dword ptr [ebp + 0x2cc]
        push    eax
        push    ecx
        push    edx
        call    FUN_004919e0
        mov     al, byte ptr [esp + 0x17]
        add     esp, 0x10
        test    al, al
        jz      l_not_bvar

        mov     al, byte ptr [esp + 0x40]
        test    al, al
        jnz     l_skip_91a30
        call    FUN_00491a30
    l_skip_91a30:
        mov     eax, dword ptr [ebp + 0x26c]
        mov     ecx, dword ptr [eax + 0x110]
        call    FUN_004c4210
        jmp     l_after_bvar

    l_not_bvar:
        mov     ecx, dword ptr [ebp + 0x8c]
        mov     edx, dword ptr [ebp + 0x9c]
        mov     eax, dword ptr [ebp + 0xac]
        mov     dword ptr [g_7da930], ecx
        mov     dword ptr [g_7da934], edx
        mov     dword ptr [g_7da938], eax

    l_after_bvar:
        push    ebx
        push    esi
        lea     esi, [ebp + 0x274]
        push    edi
        mov     ecx, esi
        call    FUN_0041fd80
        test    eax, eax
        jz      l_skip_first
        mov     al, byte ptr [g_7daaf8]
        test    al, al
        jnz     l_skip_first
        mov     al, byte ptr [ebp + 0x26a]
        test    al, al
        jz      l_skip_first
        lea     ecx, [ebp + 0x27c]
        call    FUN_0041fd80
        test    eax, eax
        jz      l_skip_first
        mov     ecx, esi
        call    FUN_0041fd80
        mov     edx, dword ptr [g_7da934]
        mov     ebx, eax
        mov     eax, dword ptr [g_7da938]
        lea     esi, [ebx + 0x50]
        mov     ecx, 0xc
        lea     edi, [esp + 0x18]
        rep movsd
        mov     ecx, dword ptr [g_7da930]
        mov     dword ptr [esp + 0x24], ecx
        mov     ecx, dword ptr [ebx + 0x18]
        and     ecx, 0xfffffffe
        or      ecx, 0x4
        mov     dword ptr [esp + 0x34], edx
        mov     edx, dword ptr [ebx]
        mov     dword ptr [ebx + 0x18], ecx
        mov     ecx, ebx
        mov     dword ptr [esp + 0x44], eax
        call    dword ptr [edx + 0x10]
        lea     edi, [ebx + 0x20]
        mov     ecx, 0xc
        lea     esi, [esp + 0x18]
        rep movsd
        mov     ecx, ebx
        call    dword ptr [ebx + 0x1c]
        mov     esi, dword ptr [ebp + 0x2c4]
        push    ebp
        mov     ecx, ebx
        call    dword ptr [ebx + 0x130]
        cmp     eax, -0x1
        jz      l_skip_first
        push    eax
        push    esi
        push    ebp
        mov     ecx, ebx
        call    dword ptr [ebx + 0x13c]

    l_skip_first:
        lea     esi, [ebp + 0x27c]
        mov     ecx, esi
        call    FUN_0041fd80
        test    eax, eax
        jz      l_skip_second
        mov     ecx, esi
        call    FUN_0041fd80
        mov     edi, dword ptr [ebp + 0x2c4]
        mov     esi, eax
        push    ebp
        mov     ecx, esi
        call    dword ptr [esi + 0x130]
        cmp     eax, -0x1
        jz      l_skip_second
        push    eax
        push    edi
        push    ebp
        mov     ecx, esi
        call    dword ptr [esi + 0x13c]

    l_skip_second:
        mov     al, byte ptr [esp + 0x13]
        test    al, al
        pop     edi
        pop     esi
        pop     ebx
        jnz     l_skip_428cf0
        mov     ecx, dword ptr [g_7b9648]
        test    ecx, ecx
        jz      l_skip_428cf0
        lea     eax, [ebp + 0x80]
        push    eax
        mov     eax, dword ptr [ebp + 0x26c]
        push    eax
        call    FUN_00428cf0

    l_skip_428cf0:
        mov     ebp, dword ptr [ebp + 0x26c]
        mov     ecx, dword ptr [ebp + 0x110]
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx + 0x1c]
        mov     eax, dword ptr [g_8bd548]
        mov     ecx, dword ptr [g_8bd54c]
        mov     edx, dword ptr [g_8bd550]
        mov     dword ptr [g_7dab08], eax
        mov     eax, dword ptr [g_8bd554]
        mov     dword ptr [g_7dab0c], ecx
        mov     dword ptr [g_7dab10], edx
        mov     dword ptr [g_7dab14], eax
        pop     ebp
        add     esp, 0x38
        ret     0x4
    }
}
