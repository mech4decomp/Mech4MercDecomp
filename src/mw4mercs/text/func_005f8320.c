/*
 * FUN_005f8320 (895 B) — __thiscall (ECX = this), RET 0x10 (four stack params).
 *
 * Large object constructor: initializes many fields, builds sub-objects,
 * and dispatches virtual calls.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005fc830(void);
extern void __stdcall FUN_0066ab80(void);
extern void __stdcall FUN_00416990(void);
extern void __stdcall FUN_005ba7f0(void);
extern void __stdcall FUN_0041fc80(void);
extern void __stdcall FUN_005fc110(void);
extern void __stdcall FUN_005f8860(void);
extern void __stdcall FUN_005f7db0(void);
extern void __stdcall FUN_005f7ed0(void);
extern void __stdcall FUN_005f8d70(void);
extern void __stdcall FUN_005f8b50(void);
extern void __stdcall FUN_005f9090(void);
extern void __stdcall FUN_005f95f0(void);
extern void __stdcall FUN_005f8760(void);
extern void __stdcall FUN_005f7fe0(void);
extern void __stdcall FUN_004d93a0(void);
extern void __stdcall FUN_004179b0(void);
extern void __stdcall FUN_005f8fa0(void);
extern void __stdcall FUN_0041fcd0(void);

extern unsigned short g_7db0ac;
extern unsigned short g_7db0ae;
extern int g_7dab44;
extern int g_7dab40;

__declspec(naked) void __stdcall FUN_005f8320(void *p1, void *p2, void *p3, void *p4)
{
    __asm {
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x4]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x18]
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x1c]
        push    eax
        push    ecx
        push    edi
        push    edx
        mov     ecx, esi
        call    FUN_005fc830
        xor     ebx, ebx
        lea     ecx, [esi + 0x2d0]
        mov     dword ptr [esi + 0x2c8], ebx
        mov     dword ptr [esi + 0x2cc], ebx
        call    FUN_0066ab80
        mov     dword ptr [esi + 0x350], ebx
        mov     dword ptr [esi + 0x34c], ebx
        mov     dword ptr [esi + 0x358], ebx
        mov     dword ptr [esi + 0x354], ebx
        push    ebx
        lea     ebp, [esi + 0x370]
        mov     dword ptr [esi + 0x360], ebx
        mov     dword ptr [esi + 0x35c], ebx
        push    ebx
        mov     ecx, ebp
        mov     dword ptr [esi + 0x368], ebx
        mov     dword ptr [esi + 0x364], ebx
        call    FUN_00416990
        mov     dword ptr [ebp], 0x78abd8
        push    0x1
        lea     ebp, [esi + 0x384]
        push    ebx
        mov     ecx, ebp
        call    FUN_00416990
        mov     dword ptr [ebp], 0x78abac
        mov     dword ptr [esi + 0x398], ebx
        mov     dword ptr [esi + 0x3a0], ebx
        or      eax, 0xffffffff
        mov     word ptr [esi + 0x3a8], ax
        mov     word ptr [esi + 0x3ac], ax
        lea     eax, [esp + 0x18]
        push    eax
        lea     ecx, [esp + 0x24]
        mov     dword ptr [esi + 0x39c], ebx
        mov     word ptr [esi + 0x3aa], bx
        push    ecx
        mov     dword ptr [esi + 0x3a4], ebx
        mov     word ptr [esi + 0x3ae], bx
        lea     ecx, [esi + 0x3cc]
        mov     dword ptr [esi + 0x3c4], ebx
        mov     dword ptr [esi + 0x3c8], ebx
        mov     dword ptr [esp + 0x20], ebx
        call    FUN_005ba7f0
        lea     ebp, [esi + 0x400]
        push    ebx
        mov     ecx, ebp
        mov     dword ptr [esi + 0x3d0], 0xc0000000
        mov     dword ptr [esi + 0x3d4], ebx
        mov     dword ptr [esi + 0x3d8], ebx
        mov     dword ptr [esi + 0x3dc], ebx
        mov     dword ptr [esi + 0x3e4], ebx
        mov     dword ptr [esi + 0x3e8], ebx
        mov     dword ptr [esi + 0x3ec], ebx
        mov     byte ptr [esi + 0x3f0], 0x1
        mov     dword ptr [esi + 0x3fc], ebx
        mov     dword ptr [esi + 0x3f8], ebx
        call    FUN_0041fc80
        lea     edx, [esp + 0x18]
        push    edx
        lea     eax, [esp + 0x24]
        mov     dword ptr [ebp], 0x78ab94
        mov     dword ptr [esi + 0x40c], ebx
        mov     dword ptr [esi + 0x410], ebx
        mov     dword ptr [esp + 0x1c], ebx
        push    eax
        lea     ecx, [esi + 0x414]
        call    FUN_005fc110
        push    edi
        mov     ecx, esi
        mov     dword ptr [esi], 0x78aa84
        call    FUN_005f8860
        mov     ecx, dword ptr [edi + 0x12c]
        mov     dl, byte ptr [edi + 0x130]
        lea     eax, [edi + 0x11c]
        mov     dword ptr [esi + 0x3f4], ecx
        mov     cx, word ptr [eax]
        cmp     cx, word ptr [g_7db0ac]
        mov     byte ptr [esi + 0x3f1], dl
        mov     dx, word ptr [eax + 0x2]
        mov     dword ptr [esi + 0x2fc], ebx
        mov     byte ptr [esi + 0x300], bl
        mov     dword ptr [esi + 0x3e0], ebx
        mov     dword ptr [esi + 0x3d8], ebx
        mov     dword ptr [esi + 0x418], ebx
        mov     dword ptr [esi + 0x3b0], ebx
        mov     byte ptr [esi + 0x2a0], bl
        mov     byte ptr [esi + 0x3b4], bl
        mov     word ptr [esi + 0x3ac], cx
        mov     word ptr [esi + 0x3ae], dx
        jnz     loc_8511
        cmp     dx, word ptr [g_7db0ae]
        jz      loc_851e
loc_8511:
        mov     ecx, dword ptr [esp + 0x1c]
        push    ecx
        push    eax
        mov     ecx, esi
        call    FUN_005f7db0
loc_851e:
        mov     dx, word ptr [edi + 0x118]
        mov     cx, word ptr [edi + 0x11a]
        lea     eax, [edi + 0x118]
        mov     word ptr [esi + 0x3a8], dx
        mov     dx, word ptr [g_7db0ac]
        cmp     word ptr [eax], dx
        mov     word ptr [esi + 0x3aa], cx
        jnz     loc_8559
        mov     cx, word ptr [g_7db0ae]
        cmp     word ptr [eax + 0x2], cx
        jz      loc_8561
loc_8559:
        push    eax
        mov     ecx, esi
        call    FUN_005f7ed0
loc_8561:
        mov     edx, dword ptr [esi + 0x78]
        lea     ebp, [esi + 0x78]
        mov     ecx, ebp
        call    dword ptr [edx + 0x4]
        mov     ecx, dword ptr [edi + 0x128]
        mov     edx, dword ptr [edi + 0x124]
        mov     dword ptr [esp + 0x1c], eax
        mov     al, byte ptr [edi + 0x120]
        mov     dword ptr [esi + 0x278], ecx
        mov     ecx, esi
        mov     dword ptr [esi + 0x408], ebx
        mov     byte ptr [esi + 0x274], al
        mov     dword ptr [esi + 0x27c], edx
        call    FUN_005f8d70
        mov     ecx, esi
        call    FUN_005f8b50
        mov     ecx, esi
        call    FUN_005f9090
        mov     ecx, esi
        call    FUN_005f95f0
        mov     ecx, esi
        call    FUN_005f8760
        mov     edi, dword ptr [esp + 0x1c]
        mov     cx, word ptr [edi + 0x5c]
        cmp     cx, word ptr [g_7db0ac]
        lea     eax, [edi + 0x5c]
        jnz     loc_85de
        mov     dx, word ptr [eax + 0x2]
        cmp     dx, word ptr [g_7db0ae]
        jz      loc_85e6
loc_85de:
        push    eax
        mov     ecx, esi
        call    FUN_005f7fe0
loc_85e6:
        mov     ecx, esi
        mov     dword ptr [esp + 0x14], ebx
        call    FUN_004d93a0
        lea     ecx, [esp + 0x14]
        push    ecx
        push    esi
        call    dword ptr [eax + 0xa4]
        mov     edx, dword ptr [ebp]
        add     esp, 0x8
        mov     ecx, ebp
        mov     dword ptr [esi + 0x2f4], eax
        call    dword ptr [edx + 0x4]
        mov     ebp, eax
        cmp     byte ptr [edi + 0x88], bl
        jz      loc_863c
        mov     ecx, dword ptr [g_7dab44]
        mov     edi, dword ptr [ecx]
        mov     eax, dword ptr [g_7dab40]
        xor     eax, edi
        mov     ecx, dword ptr [eax + 0xc]
        xor     ecx, 0x85739531
        push    esi
        add     ecx, 0xd0
        call    FUN_004179b0
loc_863c:
        add     ebp, 0x188
        push    ebp
        mov     ecx, esi
        call    FUN_005f8fa0
        cmp     eax, ebx
        jz      loc_865a
        push    eax
        lea     ecx, [esi + 0x400]
        call    FUN_0041fcd0
loc_865a:
        mov     eax, dword ptr [esi + 0xd8]
        mov     ecx, dword ptr [eax + 0x18]
        mov     edx, dword ptr [esi + 0x10]
        and     ecx, 0xc0
        and     edx, 0x1f000
        mov     dword ptr [esi + 0x348], ecx
        push    0x78aa70
        mov     ecx, esi
        mov     dword ptr [esi + 0x344], edx
        mov     dword ptr [esi + 0x340], ebx
        call    FUN_005f8fa0
        pop     edi
        mov     dword ptr [esi + 0x340], eax
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x10
    }
}
