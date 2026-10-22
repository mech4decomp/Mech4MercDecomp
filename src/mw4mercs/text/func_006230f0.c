/*
 * FUN_006230f0 (375 B) - __thiscall (ECX = this), RET 0x10 (four stack params).
 *
 * ABL interpreter region. Appends a new entry (param_1..param_3 + a byte) to a
 * growable array on `this` (offsets 0x2b8/0x2bc/0x2c0), growing it via
 * FUN_004084d0 / FUN_006250e0 when full. Calls FUN_00622a00.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00622a00(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_006250e0(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_006230f0(void)
{
    __asm {
        sub     esp, 0x18
        push    ebx
        mov     bl, byte ptr [esp + 0x2c]
        push    ebp
        mov     ebp, ecx
        mov     edx, dword ptr [ebp + 0x2b8]
        mov     eax, dword ptr [ebp + 0x2bc]
        mov     ecx, dword ptr [esp + 0x24]
        sub     eax, edx
        mov     edx, dword ptr [esp + 0x2c]
        push    esi
        mov     esi, dword ptr [ebp + 0x2bc]
        mov     byte ptr [esp + 0x20], bl
        mov     ebx, dword ptr [ebp + 0x2c0]
        sar     eax, 0x4
        cmp     esi, ebx
        push    edi
        mov     edi, dword ptr [esp + 0x30]
        mov     dword ptr [esp + 0x14], eax
        jz      L_623162
        test    esi, esi
        jz      L_623147
        mov     ebx, esi
        mov     dword ptr [ebx], ecx
        mov     ecx, dword ptr [esp + 0x24]
        mov     dword ptr [ebx + 0x4], edi
        mov     dword ptr [ebx + 0x8], edx
        mov     dword ptr [ebx + 0xc], ecx
L_623147:
        add     esi, 0x10
        push    eax
        mov     ecx, ebp
        mov     dword ptr [ebp + 0x2bc], esi
        call    FUN_00622a00
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x18
        ret     0x10
L_623162:
        mov     ebx, dword ptr [ebp + 0x2b8]
        mov     eax, esi
        sub     eax, ebx
        sar     eax, 0x4
        cmp     eax, 0x1
        mov     dword ptr [esp + 0x38], 0x1
        mov     dword ptr [esp + 0x10], eax
        lea     ecx, [esp + 0x38]
        jc      L_623188
        lea     ecx, [esp + 0x10]
L_623188:
        add     eax, dword ptr [ecx]
        mov     dword ptr [esp + 0x10], eax
        jz      L_6231a2
        shl     eax, 0x4
        push    eax
        call    FUN_004084d0
        add     esp, 0x4
        mov     dword ptr [esp + 0x38], eax
        jmp     L_6231aa
L_6231a2:
        mov     dword ptr [esp + 0x38], 0x0
L_6231aa:
        cmp     ebx, esi
        mov     edi, dword ptr [esp + 0x38]
        jz      L_6231c6
L_6231b2:
        push    ebx
        push    edi
        call    FUN_006250e0
        add     ebx, 0x10
        add     esp, 0x8
        add     edi, 0x10
        cmp     ebx, esi
        jnz     L_6231b2
L_6231c6:
        test    edi, edi
        jz      L_6231e7
        mov     eax, dword ptr [esp + 0x2c]
        mov     edx, edi
        mov     dword ptr [edx], eax
        mov     eax, dword ptr [esp + 0x30]
        mov     dword ptr [edx + 0x4], eax
        mov     eax, dword ptr [esp + 0x34]
        mov     dword ptr [edx + 0x8], eax
        mov     eax, dword ptr [esp + 0x24]
        mov     dword ptr [edx + 0xc], eax
L_6231e7:
        add     edi, 0x10
        cmp     esi, esi
        jz      L_62321b
        mov     eax, esi
        sub     eax, edi
L_6231f2:
        test    edi, edi
        jz      L_623211
        lea     ecx, [eax + edi]
        mov     ebx, dword ptr [ecx]
        mov     edx, edi
        mov     dword ptr [edx], ebx
        mov     ebx, dword ptr [ecx + 0x4]
        mov     dword ptr [edx + 0x4], ebx
        mov     ebx, dword ptr [ecx + 0x8]
        mov     dword ptr [edx + 0x8], ebx
        mov     ecx, dword ptr [ecx + 0xc]
        mov     dword ptr [edx + 0xc], ecx
L_623211:
        add     edi, 0x10
        lea     edx, [eax + edi]
        cmp     edx, esi
        jnz     L_6231f2
L_62321b:
        mov     eax, dword ptr [ebp + 0x2b8]
        test    eax, eax
        mov     dword ptr [esp + 0x2c], eax
        jz      L_623232
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_623232:
        mov     ecx, dword ptr [esp + 0x38]
        mov     eax, dword ptr [esp + 0x10]
        shl     eax, 0x4
        add     eax, ecx
        mov     dword ptr [ebp + 0x2c0], eax
        mov     eax, dword ptr [esp + 0x14]
        mov     dword ptr [ebp + 0x2b8], ecx
        push    eax
        mov     ecx, ebp
        mov     dword ptr [ebp + 0x2bc], edi
        call    FUN_00622a00
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x18
        ret     0x10
    }
}
