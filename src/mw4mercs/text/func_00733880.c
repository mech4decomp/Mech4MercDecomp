/*
 * FUN_00733880 (394 B) — viewport/rendering helper.
 *
 * Clamps a rectangle against global bounds (DAT_00858940/44) using _ftol
 * float math, then calls FUN_007355d0 to draw.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0075db4a(void);          /* _ftol */
extern void __cdecl FUN_007355d0(void);
extern char g_8aa288;
extern int g_8aaeb8;
extern float g_76d598;
extern int g_858940;
extern int g_858944;
extern int g_85a214;
extern char g_87dd0a;

__declspec(naked) void __stdcall FUN_00733880(void)
{
    __asm {
        mov     al, byte ptr [g_8aa288]
        sub     esp, 0x20
        test    al, al
        push    ebx
        push    ebp
        push    esi
        jnz     L_33a01
        mov     esi, dword ptr [esp + 0x30]
        mov     eax, dword ptr [esi + 0x4]
        test    eax, eax
        jz      L_33a01
        mov     eax, dword ptr [g_8aaeb8]
        test    eax, eax
        jnz     L_33a01
        mov     ecx, dword ptr [esi + 0xd0]
        or      eax, 0xffffffff
        cmp     ecx, eax
        jnz     L_338c8
        cmp     dword ptr [esi + 0xd4], eax
        jz      L_33a01
L_338c8:
        lea     eax, [esi + 0xc0]
        push    edi
        mov     edi, dword ptr [eax]
        test    edi, edi
        mov     ecx, dword ptr [eax + 0x4]
        mov     ebx, dword ptr [eax + 0x8]
        mov     ebp, dword ptr [eax + 0xc]
        lea     edx, [esi + 0xb0]
        mov     eax, dword ptr [edx]
        mov     dword ptr [esp + 0x24], ecx
        mov     ecx, dword ptr [edx + 0x4]
        mov     dword ptr [esp + 0x10], eax
        mov     eax, dword ptr [edx + 0x8]
        mov     dword ptr [esp + 0x14], ecx
        mov     ecx, dword ptr [edx + 0xc]
        mov     dword ptr [esp + 0x20], edi
        mov     dword ptr [esp + 0x28], ebx
        mov     dword ptr [esp + 0x2c], ebp
        mov     dword ptr [esp + 0x18], eax
        mov     dword ptr [esp + 0x1c], ecx
        jge     L_33933
        fld     dword ptr [g_76d598]
        fdiv    dword ptr [esi + 0xd8]
        call    FUN_0075db4a
        imul    eax, edi
        mov     ecx, dword ptr [esp + 0x10]
        add     ecx, eax
        xor     edi, edi
        mov     dword ptr [esp + 0x10], ecx
        mov     dword ptr [esp + 0x20], edi
L_33933:
        cmp     ebx, dword ptr [g_858940]
        jle     L_33967
        fld     dword ptr [g_76d598]
        fdiv    dword ptr [esi + 0xd8]
        call    FUN_0075db4a
        mov     ecx, dword ptr [esp + 0x18]
        mov     edx, ebx
        mov     ebx, dword ptr [g_858940]
        sub     edx, ebx
        imul    eax, edx
        add     ecx, eax
        mov     dword ptr [esp + 0x18], ecx
        mov     dword ptr [esp + 0x28], ebx
L_33967:
        mov     eax, dword ptr [esp + 0x24]
        test    eax, eax
        jge     L_33991
        fld     dword ptr [g_76d598]
        fdiv    dword ptr [esi + 0xdc]
        call    FUN_0075db4a
        imul    eax, dword ptr [esp + 0x24]
        add     dword ptr [esp + 0x14], eax
        mov     dword ptr [esp + 0x24], 0x0
L_33991:
        cmp     ebp, dword ptr [g_858944]
        jle     L_339bf
        fld     dword ptr [g_76d598]
        fdiv    dword ptr [esi + 0xdc]
        call    FUN_0075db4a
        mov     ecx, ebp
        mov     ebp, dword ptr [g_858944]
        sub     ecx, ebp
        imul    eax, ecx
        add     dword ptr [esp + 0x1c], eax
        mov     dword ptr [esp + 0x2c], ebp
L_339bf:
        cmp     ebx, edi
        pop     edi
        jle     L_33a01
        test    ebx, ebx
        jl      L_33a01
        cmp     dword ptr [esp + 0x20], ebp
        jge     L_33a01
        test    ebp, ebp
        jl      L_33a01
        mov     eax, dword ptr [esi + 0x28]
        push    0x0
        push    0x1000000
        lea     edx, [esp + 0x14]
        push    edx
        mov     edx, dword ptr [g_85a214]
        push    eax
        lea     ecx, [esp + 0x2c]
        push    ecx
        push    edx
        mov     byte ptr [g_87dd0a], 0x1
        call    FUN_007355d0
        mov     byte ptr [g_87dd0a], 0x0
L_33a01:
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x20
        ret     0x4
    }
}
