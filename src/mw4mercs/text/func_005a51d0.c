/*
 * FUN_005a51d0 (389 B) — Complex method with FPU operations, virtual calls,
 * and conditional rendering logic.
 *
 * __thiscall (ECX = this), 2 stack params.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00767430(void *this);
extern int __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_0041fcb0(void);
extern void __cdecl FUN_0041fcd0(int val);
extern void __cdecl FUN_004da620(int param1, int param2);
extern int __cdecl FUN_005fad50(int val);
extern void __cdecl FUN_004db240(void);
extern void __cdecl FUN_005f3ff0(int param1, int param2);

__declspec(naked) void FUN_005a51d0(void)
{
    

extern int DAT_0076c5b0;
__asm {
mov     eax, dword ptr [esp + 0x4]
        push    ebx
        mov     ebx, ecx
        mov     ecx, dword ptr [esp + 0xc]
        push    ebp
        push    esi
        mov     esi, dword ptr [ebx + 0xd8]
        push    edi
        mov     dword ptr [ebx + 0xec], eax
        mov     dword ptr [ebx + 0xf0], ecx
        lea     ebp, [ebx + 0xf4]
        add     esi, 0x50
        mov     ecx, 0xc
        mov     edi, ebp
        lea     edx, [ebx + 0x198]
        rep movsd
        push    edx
        lea     ecx, [ebx + 0x1e0]
        call    FUN_00767430
        lea     eax, [ebx + 0x1b0]
        push    eax
        lea     ecx, [ebx + 0x1f8]
        call    FUN_00767430
        mov     ecx, dword ptr [ebx + 0xe0]
        cmp     dword ptr [ecx + 0x14], 0xe
        jnz     skip_render
        fld     dword ptr [ebx + 0x170]
        fcomp dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jz      skip_render
        fld     dword ptr [ebx + 0x16c]
        fcomp dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jz      skip_render
        mov     edx, dword ptr [ebx + 0x78]
        lea     ecx, [ebx + 0x78]
        call    dword ptr [edx + 0x4]
        mov     esi, eax
        mov     eax, dword ptr [ebx]
        mov     ecx, ebx
        call    dword ptr [eax + 0xd8]
        mov     ecx, dword ptr [ebx + 0x470]
        mov     edx, dword ptr [ebx + 0x46c]
        xor     eax, eax
        push    ecx
        push    edx
        mov     ecx, ebx
        mov     dword ptr [ebx + 0x41c], eax
        mov     dword ptr [ebx + 0x420], eax
        mov     dword ptr [ebx + 0x424], eax
        call    FUN_004da620
        lea     edi, [ebx + 0x148]
        mov     ecx, edi
        call    FUN_0041fd80
        test    eax, eax
        jnz     skip_alloc
        mov     dx, word ptr [esi + 0x66]
        push    ecx
        mov     cx, word ptr [esi + 0x64]
        mov     eax, esp
        mov     word ptr [eax], cx
        mov     ecx, ebx
        mov     word ptr [eax + 0x2], dx
        call    FUN_005fad50
        mov     esi, eax
        test    esi, esi
        jz      skip_alloc
        mov     ecx, edi
        call    FUN_0041fcb0
        push    esi
        mov     ecx, edi
        call    FUN_0041fcd0
skip_alloc:
        mov     ecx, dword ptr [ebx + 0xe0]
        mov     eax, dword ptr [ecx]
        push    0x0
        push    0x1
        call    dword ptr [eax + 0x4]
        mov     esi, dword ptr [ebx + 0xd8]
        or      dword ptr [esi + 0x18], 0xc0
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x10]
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x14]
        mov     ecx, ebx
        call    FUN_004db240
        fld     qword ptr [esp + 0x14]
        fsub    qword ptr [ebx + 0xe4]
        mov     esi, dword ptr [ebx + 0xd8]
        add     esi, 0x50
        mov     ecx, 0xc
        mov     edi, ebp
        rep movsd
        mov     edx, dword ptr [ebx]
        push    0x1
        mov     ecx, ebx
        fstp    qword ptr [ebx + 0xec]
        call    dword ptr [edx + 0x48]
skip_render:
        mov     eax, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [esp + 0x14]
        push    eax
        push    ecx
        mov     ecx, ebx
        call    FUN_005f3ff0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x8
    }


}
