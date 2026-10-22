/*
 * FUN_0041dc10 (415 B) — __thiscall (ECX=this). Stream/transform helper:
 * iterates a linked list of stream objects, tracking the one with the
 * largest 64-bit key (via FUN_006fbce0), and returns its [obj+0x10] field.
 * Reference-counts (refcount byte at [ptr-1]) are incremented/decremented
 * and freed via FUN_004084e0 when they hit zero.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00416bc0(void);
extern void __cdecl FUN_00416d00(void);
extern void __cdecl FUN_0040f060(void);
extern void __cdecl FUN_004125e0(void);
extern void __cdecl FUN_00412740(void);
extern void __cdecl FUN_0040d9b0(void);
extern void __cdecl FUN_006fbce0(void);
extern void __cdecl FUN_00416cc0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00416c60(void);

__declspec(naked) void FUN_0041dc10(void)
{
    __asm {
        sub     esp, 0x24
        push    ebx
        push    esi
        mov     esi, ecx
        lea     eax, [esi + 0x1c]
        push    eax
        lea     ecx, [esp + 0x1c]
        call    FUN_00416bc0
        lea     ecx, [esp + 0x18]
        mov     dword ptr [esp + 0x18], 0x76d610
        call    FUN_00416d00
        mov     ebx, eax
        test    ebx, ebx
        jz      loc_41dd9e
        mov     eax, dword ptr [esi + 0x4]
        add     esi, 0x4
        test    eax, eax
        mov     dword ptr [esp + 0x14], esi
        mov     dword ptr [esp + 0x8], eax
        jz      loc_41dc54
        inc     byte ptr [eax - 1]
loc_41dc54:
        push    ebp
        push    edi
        lea     ecx, [ebx + 0x10]
        push    ecx
        lea     ecx, [esp + 0x18]
        call    FUN_0040f060
        mov     edx, dword ptr [esp + 0x14]
        mov     eax, dword ptr [esp + 0x10]
        push    edx
        push    eax
        lea     ecx, [esp + 0x20]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_00412740
        lea     ecx, [esp + 0x18]
        call    FUN_0040d9b0
        lea     ecx, [esp + 0x14]
        call    FUN_0040d9b0
        mov     ecx, dword ptr [esp + 0x10]
        push    ecx
        call    FUN_006fbce0
        lea     ecx, [esp + 0x20]
        mov     ebp, eax
        mov     edi, edx
        call    FUN_00416cc0
        mov     esi, eax
        test    esi, esi
        jz      loc_41dd4e
loc_41dcb3:
        mov     edx, dword ptr [esp + 0x1c]
        push    edx
        lea     ecx, [esp + 0x14]
        call    FUN_00412740
        lea     eax, [esi + 0x10]
        push    eax
        lea     ecx, [esp + 0x18]
        call    FUN_0040f060
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0x10]
        push    ecx
        push    edx
        lea     ecx, [esp + 0x20]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x18]
        test    eax, eax
        jz      loc_41dd06
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     loc_41dd06
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
loc_41dd06:
        mov     eax, dword ptr [esp + 0x14]
        test    eax, eax
        jz      loc_41dd21
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     loc_41dd21
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
loc_41dd21:
        mov     eax, dword ptr [esp + 0x10]
        push    eax
        call    FUN_006fbce0
        cmp     edx, edi
        jl      loc_41dd3b
        jg      loc_41dd35
        cmp     eax, ebp
        jbe     loc_41dd3b
loc_41dd35:
        mov     ebx, esi
        mov     ebp, eax
        mov     edi, edx
loc_41dd3b:
        lea     ecx, [esp + 0x20]
        call    FUN_00416cc0
        mov     esi, eax
        test    esi, esi
        jnz     loc_41dcb3
loc_41dd4e:
        mov     esi, dword ptr [ebx + 0x10]
        test    esi, esi
        pop     edi
        pop     ebp
        jz      loc_41dd72
        mov     dl, byte ptr [esi - 1]
        lea     eax, [esi - 1]
        inc     dl
        mov     cl, dl
        dec     cl
        mov     byte ptr [eax], dl
        mov     byte ptr [eax], cl
        jnz     loc_41dd72
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
loc_41dd72:
        mov     eax, dword ptr [esp + 0x8]
        test    eax, eax
        jz      loc_41dd8d
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     loc_41dd8d
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
loc_41dd8d:
        lea     ecx, [esp + 0x18]
        call    FUN_00416c60
        mov     eax, esi
        pop     esi
        pop     ebx
        add     esp, 0x24
        ret
loc_41dd9e:
        lea     ecx, [esp + 0x18]
        call    FUN_00416c60
        pop     esi
        xor     eax, eax
        pop     ebx
        add     esp, 0x24
        ret
    }
}
