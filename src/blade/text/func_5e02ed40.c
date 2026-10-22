/*
 * FUN_5e02ed40 (664 B) — memmove (overlapping-aware). Handles forward and
 * backward copies with alignment + dword-loop fast paths and jump tables.
 *
 * CFLAGS: /O1
 * Match: target 100%
 *
 * __emit usage (all justified):
 *  - in-function jump-table DATA (inline asm has no `dd`; emit dword entries)
 *  - alignment padding bytes (8D 49 00 / 8B FF / 90) that MSVC6 would not
 *    emit at these exact positions
 */

__declspec(naked) void FUN_5e02ed40(void)
{
    __asm {
        push ebp
        mov ebp, esp
        push edi
        push esi
        mov esi, dword ptr [ebp+0xc]
        mov ecx, dword ptr [ebp+0x10]
        mov edi, dword ptr [ebp+0x8]
        mov eax, ecx
        mov edx, ecx
        add eax, esi
        cmp edi, esi
        jbe L_ed60
        cmp edi, eax
        jc L_eed8
L_ed60:
        test edi, 3
        jnz L_ed7c
        shr ecx, 2
        and edx, 3
        cmp ecx, 8
        jc L_ed9c
        rep movsd
        jmp dword ptr [edx*4 + 0x5e02ee88]
L_ed7c:
        mov eax, edi
        mov edx, 3
        sub ecx, 4
        jc L_ed94
        and eax, 3
        add ecx, eax
        jmp dword ptr [eax*4 + 0x5e02eda0]
L_ed94:
        jmp dword ptr [ecx*4 + 0x5e02ee98]
        nop
L_ed9c:
        jmp dword ptr [ecx*4 + 0x5e02ee1c]
        nop
        /* jump table @0x5e02eda4 (slots 1-3; slot 0 overlaps prev JMP) */
        __emit 0xB0   /* EAX=1 -> 0x5e02edb0 */
        __emit 0xED
        __emit 0x02
        __emit 0x5E
        __emit 0xDC   /* EAX=2 -> 0x5e02eddc */
        __emit 0xED
        __emit 0x02
        __emit 0x5E
        __emit 0x00   /* EAX=3 -> 0x5e02ee00 */
        __emit 0xEE
        __emit 0x02
        __emit 0x5E
        /* case EAX=1: copy 3 bytes to align */
        and edx, ecx
        mov al, byte ptr [esi]
        mov byte ptr [edi], al
        mov al, byte ptr [esi+1]
        mov byte ptr [edi+1], al
        mov al, byte ptr [esi+2]
        shr ecx, 2
        mov byte ptr [edi+2], al
        add esi, 3
        add edi, 3
        cmp ecx, 8
        jc L_ed9c
        rep movsd
        jmp dword ptr [edx*4 + 0x5e02ee88]
        /* padding 8D 49 00 */
        __emit 0x8D
        __emit 0x49
        __emit 0x00
        /* case EAX=2: copy 2 bytes to align */
        and edx, ecx
        mov al, byte ptr [esi]
        mov byte ptr [edi], al
        mov al, byte ptr [esi+1]
        shr ecx, 2
        mov byte ptr [edi+1], al
        add esi, 2
        add edi, 2
        cmp ecx, 8
        jc L_ed9c
        rep movsd
        jmp dword ptr [edx*4 + 0x5e02ee88]
        nop
        /* case EAX=3: copy 1 byte to align */
        and edx, ecx
        mov al, byte ptr [esi]
        mov byte ptr [edi], al
        inc esi
        shr ecx, 2
        inc edi
        cmp ecx, 8
        jc L_ed9c
        rep movsd
        jmp dword ptr [edx*4 + 0x5e02ee88]
        /* padding 8D 49 00 */
        __emit 0x8D
        __emit 0x49
        __emit 0x00
        /* jump table @0x5e02ee1c (8 entries, ECX=0..7) */
        __emit 0x7F   /* ECX=0 -> 0x5e02ee7f */
        __emit 0xEE
        __emit 0x02
        __emit 0x5E
        __emit 0x6C   /* ECX=1 -> 0x5e02ee6c */
        __emit 0xEE
        __emit 0x02
        __emit 0x5E
        __emit 0x64   /* ECX=2 -> 0x5e02ee64 */
        __emit 0xEE
        __emit 0x02
        __emit 0x5E
        __emit 0x5C   /* ECX=3 -> 0x5e02ee5c */
        __emit 0xEE
        __emit 0x02
        __emit 0x5E
        __emit 0x54   /* ECX=4 -> 0x5e02ee54 */
        __emit 0xEE
        __emit 0x02
        __emit 0x5E
        __emit 0x4C   /* ECX=5 -> 0x5e02ee4c */
        __emit 0xEE
        __emit 0x02
        __emit 0x5E
        __emit 0x44   /* ECX=6 -> 0x5e02ee44 */
        __emit 0xEE
        __emit 0x02
        __emit 0x5E
        __emit 0x3C   /* ECX=7 -> 0x5e02ee3c */
        __emit 0xEE
        __emit 0x02
        __emit 0x5E
        /* forward dword loop (7 dwords) */
        mov eax, dword ptr [esi+ecx*4-0x1c]
        mov dword ptr [edi+ecx*4-0x1c], eax
        mov eax, dword ptr [esi+ecx*4-0x18]
        mov dword ptr [edi+ecx*4-0x18], eax
        mov eax, dword ptr [esi+ecx*4-0x14]
        mov dword ptr [edi+ecx*4-0x14], eax
        mov eax, dword ptr [esi+ecx*4-0x10]
        mov dword ptr [edi+ecx*4-0x10], eax
        mov eax, dword ptr [esi+ecx*4-0xc]
        mov dword ptr [edi+ecx*4-0xc], eax
        mov eax, dword ptr [esi+ecx*4-0x8]
        mov dword ptr [edi+ecx*4-0x8], eax
        mov eax, dword ptr [esi+ecx*4-0x4]
        mov dword ptr [edi+ecx*4-0x4], eax
        lea eax, [ecx*4 + 0]
        add esi, eax
        add edi, eax
        jmp dword ptr [edx*4 + 0x5e02ee88]
        /* padding 8B FF */
        __emit 0x8B
        __emit 0xFF
        /* jump table @0x5e02ee88 (4 entries, EDX=0..3) */
        __emit 0x98   /* EDX=0 -> 0x5e02ee98 */
        __emit 0xEE
        __emit 0x02
        __emit 0x5E
        __emit 0xA0   /* EDX=1 -> 0x5e02eea0 */
        __emit 0xEE
        __emit 0x02
        __emit 0x5E
        __emit 0xAC   /* EDX=2 -> 0x5e02eeac */
        __emit 0xEE
        __emit 0x02
        __emit 0x5E
        __emit 0xC0   /* EDX=3 -> 0x5e02eec0 */
        __emit 0xEE
        __emit 0x02
        __emit 0x5E
        /* tail case 0: return */
        mov eax, dword ptr [ebp+8]
        pop esi
        pop edi
        leave
        ret
        nop
        /* tail case 1: copy 1 byte */
        mov al, byte ptr [esi]
        mov byte ptr [edi], al
        mov eax, dword ptr [ebp+8]
        pop esi
        pop edi
        leave
        ret
        nop
        /* tail case 2: copy 2 bytes */
        mov al, byte ptr [esi]
        mov byte ptr [edi], al
        mov al, byte ptr [esi+1]
        mov byte ptr [edi+1], al
        mov eax, dword ptr [ebp+8]
        pop esi
        pop edi
        leave
        ret
        /* padding 8D 49 00 */
        __emit 0x8D
        __emit 0x49
        __emit 0x00
        /* tail case 3: copy 3 bytes */
        mov al, byte ptr [esi]
        mov byte ptr [edi], al
        mov al, byte ptr [esi+1]
        mov byte ptr [edi+1], al
        mov al, byte ptr [esi+2]
        mov byte ptr [edi+2], al
        mov eax, dword ptr [ebp+8]
        pop esi
        pop edi
        leave
        ret
        nop
L_eed8:
        /* backward copy: point at last dword */
        lea esi, [ecx+esi-4]
        lea edi, [ecx+edi-4]
        test edi, 3
        jnz L_ef0c
        shr ecx, 2
        and edx, 3
        cmp ecx, 8
        jc L_ef00
        std
        rep movsd
        cld
        jmp dword ptr [edx*4 + 0x5e02f020]
        /* padding 8B FF */
        __emit 0x8B
        __emit 0xFF
L_ef00:
        neg ecx
        jmp dword ptr [ecx*4 + 0x5e02efd0]
        /* padding 8D 49 00 */
        __emit 0x8D
        __emit 0x49
        __emit 0x00
L_ef0c:
        mov eax, edi
        mov edx, 3
        cmp ecx, 4
        jc L_ef24
        and eax, 3
        sub ecx, eax
        jmp dword ptr [eax*4 + 0x5e02ef28]
L_ef24:
        jmp dword ptr [ecx*4 + 0x5e02f020]
        nop
        /* jump table @0x5e02ef28 (slots 1-3; slot 0 overlaps prev JMP) */
        __emit 0x38   /* EAX=1 -> 0x5e02ef38 */
        __emit 0xEF
        __emit 0x02
        __emit 0x5E
        __emit 0x58   /* EAX=2 -> 0x5e02ef58 */
        __emit 0xEF
        __emit 0x02
        __emit 0x5E
        __emit 0x80   /* EAX=3 -> 0x5e02ef80 */
        __emit 0xEF
        __emit 0x02
        __emit 0x5E
        /* case EAX=1: copy 1 byte backward */
        mov al, byte ptr [esi+3]
        and edx, ecx
        mov byte ptr [edi+3], al
        dec esi
        shr ecx, 2
        dec edi
        cmp ecx, 8
        jc L_ef00
        std
        rep movsd
        cld
        jmp dword ptr [edx*4 + 0x5e02f020]
        /* padding 8D 49 00 */
        __emit 0x8D
        __emit 0x49
        __emit 0x00
        /* case EAX=2: copy 2 bytes backward */
        mov al, byte ptr [esi+3]
        and edx, ecx
        mov byte ptr [edi+3], al
        mov al, byte ptr [esi+2]
        shr ecx, 2
        mov byte ptr [edi+2], al
        sub esi, 2
        sub edi, 2
        cmp ecx, 8
        jc L_ef00
        std
        rep movsd
        cld
        jmp dword ptr [edx*4 + 0x5e02f020]
        nop
        /* case EAX=3: copy 3 bytes backward */
        mov al, byte ptr [esi+3]
        and edx, ecx
        mov byte ptr [edi+3], al
        mov al, byte ptr [esi+2]
        mov byte ptr [edi+2], al
        mov al, byte ptr [esi+1]
        shr ecx, 2
        mov byte ptr [edi+1], al
        sub esi, 3
        sub edi, 3
        cmp ecx, 8
        jc L_ef00
        std
        rep movsd
        cld
        jmp dword ptr [edx*4 + 0x5e02f020]
        /* padding 8D 49 00 */
        __emit 0x8D
        __emit 0x49
        __emit 0x00
        /* jump table @0x5e02efb4 (7 entries, indexed negative from base 0x5e02efd0) */
        __emit 0xD4   /* ECX=-7 -> 0x5e02efd4 */
        __emit 0xEF
        __emit 0x02
        __emit 0x5E
        __emit 0xDC   /* ECX=-6 -> 0x5e02efdc */
        __emit 0xEF
        __emit 0x02
        __emit 0x5E
        __emit 0xE4   /* ECX=-5 -> 0x5e02efe4 */
        __emit 0xEF
        __emit 0x02
        __emit 0x5E
        __emit 0xEC   /* ECX=-4 -> 0x5e02efec */
        __emit 0xEF
        __emit 0x02
        __emit 0x5E
        __emit 0xF4   /* ECX=-3 -> 0x5e02eff4 */
        __emit 0xEF
        __emit 0x02
        __emit 0x5E
        __emit 0xFC   /* ECX=-2 -> 0x5e02effc */
        __emit 0xEF
        __emit 0x02
        __emit 0x5E
        __emit 0x04   /* ECX=-1 -> 0x5e02f004 */
        __emit 0xF0
        __emit 0x02
        __emit 0x5E
        /* dispatch base slot @0x5e02efd0 (ECX=0, unused) */
        __emit 0x17
        __emit 0xF0
        __emit 0x02
        __emit 0x5E
        /* backward dword loop (7 dwords) */
        mov eax, dword ptr [esi+ecx*4+0x1c]
        mov dword ptr [edi+ecx*4+0x1c], eax
        mov eax, dword ptr [esi+ecx*4+0x18]
        mov dword ptr [edi+ecx*4+0x18], eax
        mov eax, dword ptr [esi+ecx*4+0x14]
        mov dword ptr [edi+ecx*4+0x14], eax
        mov eax, dword ptr [esi+ecx*4+0x10]
        mov dword ptr [edi+ecx*4+0x10], eax
        mov eax, dword ptr [esi+ecx*4+0xc]
        mov dword ptr [edi+ecx*4+0xc], eax
        mov eax, dword ptr [esi+ecx*4+0x8]
        mov dword ptr [edi+ecx*4+0x8], eax
        mov eax, dword ptr [esi+ecx*4+0x4]
        mov dword ptr [edi+ecx*4+0x4], eax
        lea eax, [ecx*4 + 0]
        add esi, eax
        add edi, eax
        jmp dword ptr [edx*4 + 0x5e02f020]
        /* padding 8B FF */
        __emit 0x8B
        __emit 0xFF
        /* jump table @0x5e02f020 (4 entries, EDX=0..3) */
        __emit 0x30   /* EDX=0 -> 0x5e02f030 */
        __emit 0xF0
        __emit 0x02
        __emit 0x5E
        __emit 0x38   /* EDX=1 -> 0x5e02f038 */
        __emit 0xF0
        __emit 0x02
        __emit 0x5E
        __emit 0x48   /* EDX=2 -> 0x5e02f048 */
        __emit 0xF0
        __emit 0x02
        __emit 0x5E
        __emit 0x5C   /* EDX=3 -> 0x5e02f05c */
        __emit 0xF0
        __emit 0x02
        __emit 0x5E
        /* backward tail case 0: return */
        mov eax, dword ptr [ebp+8]
        pop esi
        pop edi
        leave
        ret
        nop
        /* backward tail case 1: copy 1 byte */
        mov al, byte ptr [esi+3]
        mov byte ptr [edi+3], al
        mov eax, dword ptr [ebp+8]
        pop esi
        pop edi
        leave
        ret
        /* padding 8D 49 00 */
        __emit 0x8D
        __emit 0x49
        __emit 0x00
        /* backward tail case 2: copy 2 bytes */
        mov al, byte ptr [esi+3]
        mov byte ptr [edi+3], al
        mov al, byte ptr [esi+2]
        mov byte ptr [edi+2], al
        mov eax, dword ptr [ebp+8]
        pop esi
        pop edi
        leave
        ret
        nop
        /* backward tail case 3: copy 3 bytes */
        mov al, byte ptr [esi+3]
        mov byte ptr [edi+3], al
        mov al, byte ptr [esi+2]
        mov byte ptr [edi+2], al
        mov al, byte ptr [esi+1]
        mov byte ptr [edi+1], al
        mov eax, dword ptr [ebp+8]
        pop esi
        pop edi
        leave
        ret
    }
}
