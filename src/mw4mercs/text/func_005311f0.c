/*
 * FUN_005311F0 (470 B) — Game state lookup/search function
 * Called with __thiscall (ECX = this pointer).
 * Searches through two arrays of game objects, collects matching entries,
 * sorts them by a key, and returns the best match.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void func_005311f0(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
extern void __cdecl FUN_00622899(void);
extern void __cdecl FUN_00622810(void);
extern void __cdecl FUN_1004cde0a(void);
extern void __cdecl FUN_1004cecff(void);
__asm {
sub     esp, 0x8C4
        push    ebx
        push    ebp
        push    esi
        mov     edx, ecx
        push    edi
        xor     edi, edi
        mov     dword ptr [esp + 0x18], edx
        xor     ebx, ebx
        lea     eax, [esp + 0x1C]
        mov     ecx, 0x117

zero_loop:
        mov     byte ptr [eax], 0x00
        mov     word ptr [eax + 0x02], di
        add     eax, 0x04
        dec     ecx
        jnz     zero_loop

        mov eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [eax]
        xor ecx, dword ptr [DAT_007dab40]
        mov     ebp, dword ptr [ecx + 0x20]
        xor     ebp, 0x85739531
        add     edx, 0x3584
        mov     dword ptr [esp + 0x10], edx
        mov     dword ptr [esp + 0x14], 0xFF

loop1_start:
        mov     eax, dword ptr [edx]
        test    eax, eax
        jz      loop1_next
        mov     eax, dword ptr [eax + 0x170]
        test    eax, eax
        jz      loop1_next
        mov     edx, dword ptr [eax + 0x10]
        shr     edx, 0x13
        and     dl, 0x01
        cmp     dl, 0x01
        jz      loop1_next
        mov     ecx, dword ptr [ebp + 0x225C]
        lea     esi, [eax + 0x14]
        push    esi
        push    0x2B
        call FUN_00622899
        mov     cx, word ptr [esi + 0x02]
        mov     dword ptr [esp + edi + 0x478], eax
        mov     al, byte ptr [esi]
        mov     byte ptr [esp + edi + 0x1C], al
        mov     word ptr [esp + edi + 0x1E], cx
        inc     ebx
        add     edi, 0x04

loop1_next:
        mov     edx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esp + 0x14]
        add     edx, 0x2038
        dec     eax
        mov     dword ptr [esp + 0x10], edx
        mov     dword ptr [esp + 0x14], eax
        jnz     loop1_start

        mov     edx, dword ptr [esp + 0x18]
        lea     esi, [edx + 0x205D30]
        mov     dword ptr [esp + 0x14], esi
        lea     edi, [ebx*4]
        mov     dword ptr [esp + 0x10], 0x18

loop2_start:
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      loop2_next
        mov     cl, byte ptr [esi + 0x204]
        test    cl, cl
        jz      loop2_next
        mov     cl, byte ptr [esi + 0x205]
        test    cl, cl
        jz      loop2_next
        mov     ecx, dword ptr [eax + 0x10]
        shr     ecx, 0x13
        and     cl, 0x01
        cmp     cl, 0x01
        jz      loop2_next
        mov     ecx, dword ptr [ebp + 0x225C]
        lea     esi, [eax + 0x14]
        push    esi
        push    0x2B
        call FUN_00622810
        mov     dl, byte ptr [esi]
        mov     dword ptr [esp + edi + 0x478], eax
        mov     ax, word ptr [esi + 0x02]
        mov     esi, dword ptr [esp + 0x14]
        mov     byte ptr [esp + edi + 0x1C], dl
        mov     word ptr [esp + edi + 0x1E], ax
        inc     ebx
        add     edi, 0x04

loop2_next:
        mov     eax, dword ptr [esp + 0x10]
        add     esi, 0x22AC
        dec     eax
        mov     dword ptr [esp + 0x14], esi
        mov     dword ptr [esp + 0x10], eax
        jnz     loop2_start

        xor     edi, edi
        xor     esi, esi
        test    ebx, ebx
        jle     sort_done

sort_outer:
        cmp     edi, ebx
        mov     eax, edi
        jge     sort_next_i

sort_inner:
        lea     edx, [esi*4]
sort_inner_entry:
        mov     ebp, dword ptr [esp + edx + 0x478]
        lea     ecx, [eax*4]
        cmp     ebp, dword ptr [esp + ecx + 0x478]
        jge     sort_skip
        mov     esi, eax
        mov     edx, ecx

sort_skip:
        inc     eax
        cmp     eax, ebx
        jl      sort_inner_entry

sort_next_i:
        inc     edi
        cmp     edi, ebx
        jl      sort_outer

sort_done:
        mov ecx, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [ecx]
        mov ebx, dword ptr [DAT_007dab40]
        xor     edx, edx
        mov     dl, byte ptr [esp + esi*4 + 0x1C]
        lea     esi, [esp + esi*4 + 0x1C]
        xor     eax, ebx
        mov     ecx, dword ptr [eax + 0x14]
        xor     ecx, 0x85739531
        push    edx
        call FUN_1004cde0a
        test    eax, eax
        jnz     found_match

        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        add     esp, 0x8C4
        ret     0x04

found_match:
        push    esi
        mov     ecx, eax
        call FUN_1004cecff
        mov     ecx, dword ptr [esp + 0x8D8]
        pop     edi
        pop     esi
        test    eax, eax
        pop     ebp
        mov     dword ptr [ecx], eax
        setnz   al
        pop     ebx
        add     esp, 0x8C4
        ret     0x04
    }


}
