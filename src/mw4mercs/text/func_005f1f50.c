/*
 * FUN_005f1f50 (376 B) — __thiscall cleanup/rebuild helper.
 *
 * Iterates a list of entries (this+0x1c4..0x1c8), optionally writing into a
 * global lookup table and freeing each entry, then rebuilds this+0x1c8 via
 * FUN_005f2ad0, frees a second list (this+0x1d0..0x1d4) unlinking from a
 * global hash table, and finally copies the tail list back.
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_00676480(int a, int b, void *c);
extern void __stdcall FUN_00416130(void *p);
extern void *__stdcall FUN_005f2ad0(void *a, void *b, void *c, int d, int e);

__declspec(naked) void __stdcall FUN_005f1f50(void *param)
{
    

extern int DAT_007f2440;
extern int DAT_0080daa8;
extern int DAT_0080da94;
extern int DAT_0080daa4;
__asm {
push    ecx
        push    ebx
        push    ebp
        push    esi
        mov     ebx, ecx
        mov     eax, dword ptr [ebx + 0x1C8]
        push    edi
        mov     edi, dword ptr [ebx + 0x1C4]
        cmp     edi, eax
        jz      L1FCB
L1F67:
        mov     al, byte ptr [esp + 0x18]
        test    al, al
        jnz     L1FAC
        mov     ecx, dword ptr [edi]
        mov eax, dword ptr [DAT_007f2440]
        mov     ebp, dword ptr [eax + 0x3C]
        mov     edx, dword ptr [ecx]
        mov     esi, dword ptr [ecx + 4]
        mov     cx, word ptr [ecx + 8]
        mov     ebp, dword ptr [ebp + 8]
        lea     eax, [edx + 0x100]
        mov     dword ptr [esp + 0x10], eax
        lea     eax, [esi + 0x100]
        shl     eax, 9
        add     eax, dword ptr [esp + 0x10]
        push    ebx
        push    esi
        push    edx
        mov     word ptr [ebp + eax*2], cx
        call    FUN_00676480
        add     esp, 0xC
L1FAC:
        mov     eax, dword ptr [edi]
        test    eax, eax
        jz      L1FBE
        mov ecx, dword ptr [DAT_0080daa8]
        push    eax
        call    FUN_00416130
L1FBE:
        mov     eax, dword ptr [ebx + 0x1C8]
        add     edi, 4
        cmp     edi, eax
        jnz     L1F67
L1FCB:
        mov     edx, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [ebx + 0x1C4]
        mov     eax, dword ptr [ebx + 0x1C8]
        push    0
        push    edx
        push    ecx
        push    eax
        push    eax
        call    FUN_005f2ad0
        mov     esi, dword ptr [ebx + 0x1D0]
        mov     dword ptr [ebx + 0x1C8], eax
        mov     eax, dword ptr [ebx + 0x1D4]
        add     esp, 0x14
        cmp     esi, eax
        mov     dword ptr [esp + 0x18], esi
        jz      L2096
        mov ebp, dword ptr [DAT_0080da94]
L200D:
        mov     ecx, dword ptr [esi]
        mov     eax, dword ptr [ecx + 0x10]
        mov     edx, dword ptr [ebp + 0xC]
        cmp     eax, edx
        jl      L206B
        mov     edi, dword ptr [ebp + 0x10]
        sub     eax, edx
        mov     esi, eax
        cmp     esi, edi
        jge     L2067
        mov     eax, dword ptr [ebp + 8]
        lea     edx, [eax + esi*1]
        cmp     edx, edi
        jl      L2034
        sub     eax, edi
        add     eax, esi
        mov     edx, eax
L2034:
        cmp     edx, -1
        jz      L2067
        mov     eax, dword ptr [ebp]
        lea     edx, [eax + edx*4]
        cmp     dword ptr [edx], ecx
        jnz     L2048
        mov     eax, dword ptr [ecx + 0x2C]
        mov     dword ptr [edx], eax
L2048:
        mov     eax, dword ptr [ecx + 0x30]
        xor     esi, esi
        cmp     eax, esi
        jz      L2057
        mov     edx, dword ptr [ecx + 0x2C]
        mov     dword ptr [eax + 0x2C], edx
L2057:
        mov     edx, dword ptr [ecx + 0x2C]
        cmp     edx, esi
        jz      L2061
        mov     dword ptr [edx + 0x30], eax
L2061:
        mov     dword ptr [ecx + 0x30], esi
        mov     dword ptr [ecx + 0x2C], esi
L2067:
        mov     esi, dword ptr [esp + 0x18]
L206B:
        test    ecx, ecx
        jz      L2081
        push    ecx
        mov ecx, dword ptr [DAT_0080daa4]
        call    FUN_00416130
        mov ebp, dword ptr [DAT_0080da94]
L2081:
        mov     eax, dword ptr [ebx + 0x1D4]
        add     esi, 4
        cmp     esi, eax
        mov     dword ptr [esp + 0x18], esi
        jnz     L200D
L2096:
        mov     eax, dword ptr [ebx + 0x1D4]
        mov     edx, dword ptr [ebx + 0x1D0]
        mov     ecx, eax
        sub     ecx, eax
        sar     ecx, 2
        test    ecx, ecx
        jle     L20BA
L20AD:
        mov     esi, dword ptr [eax]
        mov     dword ptr [edx], esi
        add     eax, 4
        add     edx, 4
        dec     ecx
        jnz     L20AD
L20BA:
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr [ebx + 0x1D4], edx
        pop     ebx
        pop     ecx
        ret     4
    }




}
