/*
 * FUN_004e2930 (365 B) — MLR/Adept: update a grid/zone region. __thiscall
 * (ECX = this), RET 0x4 (1 stack arg). Computes a zone index, walks a
 * linked list, and iterates a 2D region dispatching FUN_004e9f10.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b4350;
extern void __cdecl FUN_004e27b0(void);
extern void __cdecl FUN_004ea190(void);
extern void __cdecl FUN_004e9f10(void);

__declspec(naked) void FUN_004e2930(void)
{
    __asm {
        sub     esp, 0x10
        mov     eax, dword ptr [esp + 0x14]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     ebp, ecx
        push    eax
        mov     dword ptr [esp + 0x1c], ebp
        call    FUN_004e27b0
        mov     ecx, eax
        mov     eax, dword ptr [ebp + 0x17c]
        mov     edx, ecx
        shl     edx, 0x5
        add     edx, ecx
        lea     edx, [ecx + edx*0x4]
        mov     dword ptr [esp + 0x1c], eax
        lea     eax, [eax + edx*0x4]
        cmp     eax, dword ptr [ebp + 0x180]
        mov     dword ptr [esp + 0x14], eax
        jz      loc_4e2a93
        xor     eax, eax
        mov     al, byte ptr [ebp + 0x16a]
        mov     esi, eax
        mov     eax, ecx
        cdq
        idiv    esi
        mov     edx, esi
        imul    edx, eax
        sub     ecx, edx
        mov     edx, dword ptr [g_007b4350]
        cmp     ecx, edx
        jc      loc_4e299a
        mov     edi, ecx
        sub     edi, edx
        mov     dword ptr [esp + 0x24], edi
        jmp     loc_4e29a2
loc_4e299a:
        mov     dword ptr [esp + 0x24], 0x0
loc_4e29a2:
        cmp     eax, edx
        jc      loc_4e29ac
        mov     ebx, eax
        sub     ebx, edx
        jmp     loc_4e29ae
loc_4e29ac:
        xor     ebx, ebx
loc_4e29ae:
        add     ecx, edx
        cmp     ecx, esi
        jc      loc_4e29ba
        mov     dword ptr [esp + 0x10], esi
        jmp     loc_4e29bf
loc_4e29ba:
        inc     ecx
        mov     dword ptr [esp + 0x10], ecx
loc_4e29bf:
        xor     ecx, ecx
        mov     cl, byte ptr [ebp + 0x16b]
        add     eax, edx
        mov     edi, ecx
        cmp     eax, edi
        jnc     loc_4e29d2
        lea     edi, [eax + 0x1]
loc_4e29d2:
        mov     ebp, dword ptr [ebp + 0x18c]
loc_4e29d8:
        test    ebp, ebp
        jz      loc_4e2a13
loc_4e29dc:
        mov     ecx, dword ptr [ebp]
        test    ecx, ecx
        mov     ebp, dword ptr [ebp + 0x4]
        jz      loc_4e2a13
        xor     eax, eax
        mov     al, byte ptr [ecx + 0x150]
        cmp     eax, ebx
        jc      loc_4e2a0c
        cmp     eax, edi
        jnc     loc_4e2a0c
        mov     edx, dword ptr [esp + 0x24]
        xor     eax, eax
        mov     al, byte ptr [ecx + 0x151]
        cmp     eax, edx
        jc      loc_4e2a0c
        cmp     eax, dword ptr [esp + 0x10]
        jc      loc_4e29d8
loc_4e2a0c:
        call    FUN_004ea190
        jmp     loc_4e29d8
loc_4e2a13:
        cmp     ebx, edi
        mov     edx, dword ptr [esp + 0x14]
        mov     eax, dword ptr [esp + 0x18]
        mov     dword ptr [eax + 0x180], edx
        jnc     loc_4e2a93
        mov     eax, dword ptr [esp + 0x24]
        mov     ecx, esi
        shl     ecx, 0x5
        add     ecx, esi
        lea     ebp, [esi + ecx*0x4]
        imul    esi, ebx
        add     esi, eax
        mov     edx, esi
        shl     edx, 0x5
        add     edx, esi
        lea     ecx, [esi + edx*0x4]
        mov     edx, dword ptr [esp + 0x1c]
        shl     ebp, 0x2
        lea     esi, [edx + ecx*0x4]
        sub     edi, ebx
        mov     ebx, dword ptr [esp + 0x10]
        mov     dword ptr [esp + 0x14], esi
loc_4e2a56:
        cmp     eax, ebx
        jnc     loc_4e2a86
        sub     ebx, eax
loc_4e2a5c:
        mov     eax, dword ptr [esi + 0x14c]
        and     eax, 0x180
        cmp     eax, 0x100
        jz      loc_4e2a75
        mov     ecx, esi
        call    FUN_004e9f10
loc_4e2a75:
        add     esi, 0x214
        dec     ebx
        jnz     loc_4e2a5c
        mov     eax, dword ptr [esp + 0x24]
        mov     ebx, dword ptr [esp + 0x10]
loc_4e2a86:
        mov     esi, dword ptr [esp + 0x14]
        add     esi, ebp
        dec     edi
        mov     dword ptr [esp + 0x14], esi
        jnz     loc_4e2a56
loc_4e2a93:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x10
        ret     0x4
    }
}
