/*
 * FUN_006b0310 (324 B) — __thiscall (ECX = this), RET 0x4 (1 arg).
 *
 * Growable-array insert of a 0x18-byte element. If capacity remains, copy
 * the element into the current slot and bump the count. Otherwise grow the
 * buffer (operator new FUN_004084d0), copy existing elements
 * (FUN_00687c70), copy the new element (FUN_0040c5d0), and free the old
 * buffer (FUN_004084e0). ABL record-handler vector helper.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00687c70(void);
extern void __cdecl FUN_0040c5d0(void);
extern void __cdecl FUN_00687ca0(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void __fastcall func_006b0310(int thisptr)
{
    __asm {
        sub     esp, 0xc
        mov     eax, dword ptr [ecx + 0x8]
        push    esi
        mov     esi, dword ptr [ecx + 0x4]
        cmp     esi, eax
        mov     dword ptr [esp + 0xc], ecx
        jz      L_0359
        test    esi, esi
        jz      L_034c
        mov     eax, dword ptr [esp + 0x14]
        mov     edx, dword ptr [eax]
        mov     dword ptr [esi], edx
        mov     edx, dword ptr [eax + 0x4]
        mov     dword ptr [esi + 0x4], edx
        mov     edx, dword ptr [eax + 0x8]
        mov     dword ptr [esi + 0x8], edx
        mov     edx, dword ptr [eax + 0xc]
        mov     dword ptr [esi + 0xc], edx
        mov     dl, byte ptr [eax + 0x10]
        mov     eax, dword ptr [eax + 0x14]
        mov     byte ptr [esi + 0x10], dl
        mov     dword ptr [esi + 0x14], eax
L_034c:
        add     esi, 0x18
        mov     dword ptr [ecx + 0x4], esi
        pop     esi
        add     esp, 0xc
        ret     0x4
L_0359:
        push    ebx
        push    ebp
        mov     ebp, dword ptr [ecx]
        mov     ecx, esi
        sub     ecx, ebp
        mov     eax, 0x2aaaaaab
        imul    ecx
        sar     edx, 0x2
        mov     ecx, edx
        shr     ecx, 0x1f
        add     edx, ecx
        cmp     edx, 0x1
        push    edi
        mov     dword ptr [esp + 0x14], 0x1
        mov     dword ptr [esp + 0x10], edx
        lea     eax, [esp + 0x14]
        jc      L_038c
        lea     eax, [esp + 0x10]
L_038c:
        mov     ebx, dword ptr [eax]
        add     ebx, edx
        mov     dword ptr [esp + 0x10], ebx
        jz      L_03ab
        lea     edx, [ebx + ebx*0x2]
        shl     edx, 0x3
        push    edx
        call    FUN_004084d0
        add     esp, 0x4
        mov     dword ptr [esp + 0x14], eax
        jmp     L_03b3
L_03ab:
        mov     dword ptr [esp + 0x14], 0x0
L_03b3:
        cmp     ebp, esi
        mov     edi, dword ptr [esp + 0x14]
        jz      L_03d5
        mov     ebx, ebp
L_03bd:
        push    ebx
        push    edi
        call    FUN_00687c70
        add     ebx, 0x18
        add     esp, 0x8
        add     edi, 0x18
        cmp     ebx, esi
        jnz     L_03bd
        mov     ebx, dword ptr [esp + 0x10]
L_03d5:
        test    edi, edi
        jz      L_03fb
        mov     ebx, dword ptr [esp + 0x20]
        push    ebx
        mov     ecx, edi
        call    FUN_0040c5d0
        mov     eax, dword ptr [ebx + 0xc]
        mov     cl, byte ptr [ebx + 0x10]
        mov     edx, dword ptr [ebx + 0x14]
        mov     ebx, dword ptr [esp + 0x10]
        mov     dword ptr [edi + 0xc], eax
        mov     byte ptr [edi + 0x10], cl
        mov     dword ptr [edi + 0x14], edx
L_03fb:
        add     edi, 0x18
        cmp     esi, esi
        jz      L_0423
        mov     ebx, esi
        sub     ebx, edi
L_0406:
        test    edi, edi
        jz      L_0415
        lea     eax, [ebx + edi*0x1]
        push    eax
        mov     ecx, edi
        call    FUN_00687ca0
L_0415:
        add     edi, 0x18
        lea     ecx, [ebx + edi*0x1]
        cmp     ecx, esi
        jnz     L_0406
        mov     ebx, dword ptr [esp + 0x10]
L_0423:
        test    ebp, ebp
        mov     dword ptr [esp + 0x20], ebp
        jz      L_0434
        push    ebp
        call    FUN_004084e0
        add     esp, 0x4
L_0434:
        mov     eax, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [eax + 0x4], edi
        pop     edi
        lea     edx, [ebx + ebx*0x2]
        pop     ebp
        mov     dword ptr [eax], ecx
        lea     ecx, [ecx + edx*0x8]
        pop     ebx
        mov     dword ptr [eax + 0x8], ecx
        pop     esi
        add     esp, 0xc
        ret     0x4
    }
}
