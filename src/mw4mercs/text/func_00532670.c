/*
 * FUN_00532670 (199 B) — Decal name registration function
 * Called with __thiscall (ECX = this pointer, but also takes params on stack).
 * Registers a decal by name, assigning it a numeric ID.
 * If the name already exists, increments its reference count.
 * Otherwise creates a new entry.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void func_00532670(void)
{
    

extern void __cdecl FUN_00532740(void);
extern void __cdecl FUN_004084d0(void);
extern int DAT_007b8c10;
extern void __cdecl FUN_00415180(void);
extern void __cdecl FUN_00412780(void);
extern void __cdecl FUN_00416a90(void);
__asm {
push    ecx
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x10]
        push    esi
        push    edi
        push    ebp
        mov     dword ptr [esp + 0x14], ecx
        call FUN_00532740
        mov     edi, eax
        xor     ebx, ebx
        cmp     edi, ebx
        jz      not_found

        mov     edx, dword ptr [edi + 0x18]
        mov     esi, ebp

strcmp_loop:
        mov     cl, byte ptr [edx]
        mov     al, cl
        cmp     cl, byte ptr [esi]
        jnz     strcmp_diff
        cmp     al, bl
        jz      strcmp_eq
        mov     cl, byte ptr [edx + 0x01]
        mov     al, cl
        cmp     cl, byte ptr [esi + 0x01]
        jnz     strcmp_diff
        add     edx, 0x02
        add     esi, 0x02
        cmp     al, bl
        jnz     strcmp_loop

strcmp_eq:
        xor     eax, eax
        jmp     strcmp_done

strcmp_diff:
        sbb     eax, eax
        sbb     eax, -0x01

strcmp_done:
        cmp     eax, ebx
        jnz     name_mismatch

        inc     dword ptr [edi + 0x10]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x08

name_mismatch:
        mov     edx, dword ptr [edi]
        push    0x01
        mov     ecx, edi
        call    dword ptr [edx]

not_found:
        push    0x1C
        call FUN_004084d0
        mov     esi, eax
        add     esp, 0x04
        cmp     esi, ebx
        jz      alloc_failed
        mov eax, dword ptr [DAT_007b8c10]
        push    eax
        mov     ecx, esi
        call FUN_00415180
        mov     dword ptr [esi + 0x18], ebx
        mov     dword ptr [esi + 0x08], ebx
        mov     dword ptr [esi + 0x0C], ebx
        mov     dword ptr [esi], 0x0077B364
        mov     dword ptr [esi + 0x10], ebx
        jmp     alloc_done

alloc_failed:
        xor     esi, esi

alloc_done:
        push    ebp
        lea     ecx, [esi + 0x18]
        call FUN_00412780
        mov     edx, dword ptr [esi + 0x10]
        mov     ecx, dword ptr [esp + 0x1C]
        mov     eax, dword ptr [esp + 0x10]
        inc     edx
        mov     dword ptr [esi + 0x10], edx
        lea     edx, [esp + 0x1C]
        push    edx
        mov     dword ptr [esi + 0x14], ecx
        push    esi
        lea     ecx, [eax + 0xD8]
        call FUN_00416a90
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x08
    }


}
