/*
 * FUN_00622F70 (380 B) — growable vector insert (__thiscall, RET 0x10).
 *
 * Inserts a 0x10-byte element into the vector at this+0x2b8..0x2c0,
 * growing/reallocating the backing store when full, then calls
 * FUN_00622A00. Four stack params.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00622a00(void *p);
extern void *__cdecl FUN_004084d0(int n);
extern void __cdecl FUN_006250e0(void *a, void *b);
extern void __cdecl FUN_004084e0(void *p);

__declspec(naked) void func_00622f70(void)
{
    __asm {
        sub     esp, 0x18
        mov     dl, byte ptr [esp + 0x28]
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x2c]
        mov     ebx, ecx
        mov     eax, dword ptr [ebx + 0x2bc]
        mov     ecx, dword ptr [esp + 0x28]
        push    esi
        mov     esi, dword ptr [ebx + 0x2bc]
        push    edi
        sub     eax, dword ptr [ebx + 0x2b8]
        mov     edi, dword ptr [esp + 0x2c]
        mov     byte ptr [esp + 0x24], dl
        mov     edx, dword ptr [ebx + 0x2c0]
        sar     eax, 0x4
        cmp     esi, edx
        mov     byte ptr [ebx + 0x2f4], 0x1
        mov     dword ptr [esp + 0x14], eax
        jz      L_622fe7
        test    esi, esi
        jz      L_622fcc
        mov     edx, esi
        mov     dword ptr [edx], edi
        mov     dword ptr [edx + 0x4], ebp
        mov     dword ptr [edx + 0x8], ecx
        mov     ecx, dword ptr [esp + 0x24]
        mov     dword ptr [edx + 0xc], ecx
L_622fcc:
        add     esi, 0x10
        push    eax
        mov     ecx, ebx
        mov     dword ptr [ebx + 0x2bc], esi
        call    FUN_00622a00
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x18
        ret     0x10
L_622fe7:
        mov     ebp, dword ptr [ebx + 0x2b8]
        mov     eax, esi
        sub     eax, ebp
        sar     eax, 0x4
        cmp     eax, 0x1
        mov     dword ptr [esp + 0x38], 0x1
        mov     dword ptr [esp + 0x10], eax
        lea     ecx, [esp + 0x38]
        jc      L_62300d
        lea     ecx, [esp + 0x10]
L_62300d:
        add     eax, dword ptr [ecx]
        mov     dword ptr [esp + 0x10], eax
        jz      L_623027
        shl     eax, 0x4
        push    eax
        call    FUN_004084d0
        add     esp, 0x4
        mov     dword ptr [esp + 0x38], eax
        jmp     L_62302f
L_623027:
        mov     dword ptr [esp + 0x38], 0x0
L_62302f:
        cmp     ebp, esi
        mov     edi, dword ptr [esp + 0x38]
        jz      L_62304b
L_623037:
        push    ebp
        push    edi
        call    FUN_006250e0
        add     ebp, 0x10
        add     esp, 0x8
        add     edi, 0x10
        cmp     ebp, esi
        jnz     L_623037
L_62304b:
        test    edi, edi
        jz      L_62306c
        mov     eax, dword ptr [esp + 0x2c]
        mov     edx, edi
        mov     dword ptr [edx], eax
        mov     eax, dword ptr [esp + 0x34]
        mov     dword ptr [edx + 0x4], eax
        mov     eax, dword ptr [esp + 0x30]
        mov     dword ptr [edx + 0x8], eax
        mov     eax, dword ptr [esp + 0x24]
        mov     dword ptr [edx + 0xc], eax
L_62306c:
        add     edi, 0x10
        cmp     esi, esi
        jz      L_6230a0
        mov     eax, esi
        sub     eax, edi
L_623077:
        test    edi, edi
        jz      L_623096
        lea     ecx, [eax + edi*0x1]
        mov     ebp, dword ptr [ecx]
        mov     edx, edi
        mov     dword ptr [edx], ebp
        mov     ebp, dword ptr [ecx + 0x4]
        mov     dword ptr [edx + 0x4], ebp
        mov     ebp, dword ptr [ecx + 0x8]
        mov     dword ptr [edx + 0x8], ebp
        mov     ecx, dword ptr [ecx + 0xc]
        mov     dword ptr [edx + 0xc], ecx
L_623096:
        add     edi, 0x10
        lea     edx, [eax + edi*0x1]
        cmp     edx, esi
        jnz     L_623077
L_6230a0:
        mov     eax, dword ptr [ebx + 0x2b8]
        test    eax, eax
        mov     dword ptr [esp + 0x2c], eax
        jz      L_6230b7
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_6230b7:
        mov     ecx, dword ptr [esp + 0x38]
        mov     eax, dword ptr [esp + 0x10]
        shl     eax, 0x4
        add     eax, ecx
        mov     dword ptr [ebx + 0x2c0], eax
        mov     eax, dword ptr [esp + 0x14]
        mov     dword ptr [ebx + 0x2b8], ecx
        push    eax
        mov     ecx, ebx
        mov     dword ptr [ebx + 0x2bc], edi
        call    FUN_00622a00
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x18
        ret     0x10
    }
}
