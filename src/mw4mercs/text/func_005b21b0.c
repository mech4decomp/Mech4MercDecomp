/*
 * FUN_005b21b0 (389 B) — __thiscall (ECX=this), RET 0x10 (4 stack params).
 * Constructor-like: calls FUN_005c0fe0, initializes sub-objects at
 * ESI+0x6b0 / ESI+0x6c4, sets up a vector (EDI = ESI+0x6b0), writes a
 * vtable pointer 0x7860fc, and does a DRM-ish hash lookup.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_005c0fe0(void);
extern void FUN_005b38b0(void);
extern void FUN_005b38f0(void);
extern void FUN_006f4950(void);
extern void __cdecl FUN_004084d0(void *p);
extern void FUN_005b3910(void);
extern void FUN_005b38d0(void);
extern void FUN_006f49a0(void);

__declspec(naked) void FUN_005b21b0(void)
{
    

extern int DAT_007f2450;
extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x8]
        push    ebx
        push    ebp
        push    esi
        push    edi
        push    eax
        mov     eax, dword ptr [esp + 0x18]
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x20]
        push    ecx
        push    edx
        push    eax
        mov     ecx, esi
        call    FUN_005c0fe0
        lea     ecx, [esp + 0x20]
        lea     edi, [esi + 0x6b0]
        push    ecx
        mov     ecx, edi
        call    FUN_005b38b0
        lea     edx, [esp + 0x1c]
        xor     ebx, ebx
        push    edx
        lea     eax, [esp + 0x24]
        push    eax
        lea     ecx, [esi + 0x6c4]
        mov     dword ptr [esi + 0x6bc], ebx
        mov     dword ptr [esi + 0x6c0], ebx
        mov     dword ptr [esp + 0x24], ebx
        call    FUN_005b38f0
        mov ecx, dword ptr [DAT_007f2450]
        mov     eax, 0xbf800000
        mov     dword ptr [esi + 0x6e4], eax
        push    ecx
        mov     dword ptr [esi + 0x6e8], eax
        mov     dword ptr [esi + 0x6ec], eax
        mov     dword ptr [esi], 0x7860fc
        call    FUN_006f4950
        mov     ebp, dword ptr [edi + 0x8]
        lea     eax, [edi + 0x8]
        mov     dword ptr [esi + 0x6a8], ebx
        mov     ebx, dword ptr [edi]
        mov     edx, ebp
        sub     edx, ebx
        sar     edx, 0x2
        cmp     edx, 0x14
        mov     dword ptr [esi + 0x6ac], 0x1
        mov     dword ptr [esp + 0x20], eax
        jnc     L22C4
        mov     eax, dword ptr [edi + 0x4]
        sub     eax, ebx
        sar     eax, 0x2
        test    ebx, ebx
        mov     dword ptr [esp + 0x18], eax
        push    0x50
        jz      L22A5
        call    FUN_004084d0
        mov     ecx, dword ptr [esp + 0x24]
        push    ecx
        push    eax
        mov     dword ptr [esp + 0x28], eax
        mov     eax, dword ptr [edi + 0x4]
        push    eax
        push    ebx
        call    FUN_005b3910
        mov     eax, dword ptr [edi]
        mov     ebx, dword ptr [esp + 0x30]
        mov     ecx, dword ptr [esp + 0x34]
        sub     ebp, eax
        add     esp, 0x14
        sar     ebp, 0x2
        push    ebp
        push    eax
        mov     dword ptr [esp + 0x24], eax
        call    FUN_005b38d0
        jmp     L22AF
L22A5:
        call    FUN_004084d0
        add     esp, 0x4
        mov     ebx, eax
L22AF:
        mov     edx, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [esp + 0x20]
        lea     eax, [ebx + edx*4]
        mov     dword ptr [edi], ebx
        add     ebx, 0x50
        mov     dword ptr [edi + 0x4], eax
        mov     dword ptr [ecx], ebx
L22C4:
        mov edx, dword ptr [DAT_007dab44]
        mov edi, dword ptr [DAT_007dab40]
        mov     eax, 0xbf800000
        mov     dword ptr [esi + 0x4bc], eax
        mov     dword ptr [esi + 0x4c0], eax
        mov     dword ptr [esi + 0x4c4], eax
        mov     eax, dword ptr [edx]
        xor     eax, edi
        mov     ecx, dword ptr [eax + 0x14]
        xor     ecx, 0x85739531
        mov     al, byte ptr [ecx + 0x17fc]
        test    al, al
        mov     byte ptr [esi + 0x6d0], 0x0
        mov     byte ptr [esi + 0x6d1], 0x0
        mov     byte ptr [esi + 0x6e0], 0x0
        jz      L2327
        mov     ecx, dword ptr [esi + 0x170]
        mov     edx, dword ptr [ecx]
        mov     dword ptr [esi + 0x6a4], ecx
        call    dword ptr [edx + 0xc4]
L2327:
        call    FUN_006f49a0
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x10
    }


}
