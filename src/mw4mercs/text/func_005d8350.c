/*
 * FUN_005d8350 (158 B) — Add a node to the rail graph. Finds a free slot
 * in the array at +0x10 (or appends), stores the node, links its two
 * sub-lists (FUN_005d6bf0), records the index, sets the dirty flag, and
 * returns the index.
 *
 * __fastcall (ECX = this), one stack param, RET 4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __fastcall FUN_005d8350(void *param)
{
    

extern int DAT_007f2464;
extern void __cdecl FUN_006f494b(void);
extern void __cdecl FUN_005da00f(void);
extern void __cdecl FUN_1005d6b83(void);
extern void __cdecl FUN_1005d6b72(void);
extern void __cdecl FUN_006f4913(void);
__asm {
mov eax, dword ptr [DAT_007f2464]
        push    esi
        push    edi
        push    eax
        mov     edi, ecx
        call FUN_006f494b
        mov     eax, dword ptr [edi + 0x14]
        mov     edx, dword ptr [edi + 0x10]
        lea     ecx, [edi + 0x10]
        sub     eax, edx
        sar     eax, 0x2
        xor     esi, esi
        test    eax, eax
        jle     L8380
L8373:
        cmp     dword ptr [edx], 0x0
        jz      L8380
        inc     esi
        add     edx, 0x4
        cmp     esi, eax
        jl      L8373
L8380:
        cmp     esi, eax
        jnz     L83AD
        mov     eax, dword ptr [ecx + 0x4]
        cmp     eax, dword ptr [ecx + 0x8]
        jz      L839E
        test    eax, eax
        jz      L8396
        mov     edx, dword ptr [esp + 0xc]
        mov     dword ptr [eax], edx
L8396:
        add     eax, 0x4
        mov     dword ptr [ecx + 0x4], eax
        jmp     L83B6
L839E:
        push    0x1
        lea     edx, [esp + 0x10]
        push    edx
        push    eax
        call FUN_005da00f
        jmp     L83B6
L83AD:
        mov     eax, dword ptr [ecx]
        mov     ecx, dword ptr [esp + 0xc]
        mov     dword ptr [eax + esi*0x4], ecx
L83B6:
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [eax + 0x4]
        test    ecx, ecx
        jz      L83CB
        push    eax
        call FUN_1005d6b83
        mov     eax, dword ptr [esp + 0xc]
L83CB:
        mov     ecx, dword ptr [eax + 0x8]
        test    ecx, ecx
        jz      L83DC
        push    eax
        call FUN_1005d6b72
        mov     eax, dword ptr [esp + 0xc]
L83DC:
        mov     dword ptr [eax], esi
        mov     byte ptr [edi + 0x34], 0x1
        call FUN_006f4913
        pop     edi
        mov     eax, esi
        pop     esi
        ret     0x4
    }


}
